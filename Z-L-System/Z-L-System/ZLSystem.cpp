#include "ZLSystem.h"
#include "ui_ZLSystem.h"
#include "Vetev.h"
#include "TypVetve.h"
#include <iostream>
#include <string>
#include <list>
#include<math.h>
#include <thread>
#include <QDebug>
#include <vector>
using namespace std;

static vector<Vetev*> vektroVetvi(9999999);
static int cikulus = 0;
static int pocetVetvi = 1;

ZLSystem::ZLSystem(QWidget *parent)
	: QMainWindow(parent),
	ui(new Ui::ZLSystemClass)
{
	this->setFixedHeight(720);
	this->setFixedWidth(720);
	ui->setupUi(this);
	connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(StartOnBt()));
	timer = new QTimer(this);
	connect(timer, SIGNAL(timeout()), this, SLOT(timerFunction()));
	
	Vetev *vetev1 = new Vetev(this->height() / 2, this->width(), (this->height() / 2), this->width() - 150, 'A');
	vektroVetvi[0] = vetev1;
		
}

ZLSystem::~ZLSystem()
{
	delete ui;
}

void ZLSystem::StartOnBt()
{
	timer->start(2000);
}

QString ZLSystem::zapis() {
	return ui->label->text();
}

void ZLSystem::vytvorNoveVetve(Vetev vetev, int posun, int velikost, int index)
{
	if (vetev._vykreslena == true) {
		return;
	}

	Vetev *novaVetev = &vetev;
	int pocetNovychVetvi = (rand() % 6);
	
	for (size_t i = 0; i < pocetNovychVetvi; i++)
	{
		int typVetve = (rand() % 6);
		novaVetev = TypVetve::VytvorNovouVetevDleTypu(*novaVetev, typVetve, posun, velikost);
		if (novaVetev->_xKonec > 0 && novaVetev->_yKonec > 0) {
			vektroVetvi[pocetVetvi++] = novaVetev;
		}
	}

	vetev._vykreslena = true;
}

void ZLSystem::paintEvent(QPaintEvent *e) {
	QPainter painter(this);

	for (int i = 0; i < pocetVetvi; i++)
	{
		painter.drawLine(vektroVetvi[i]->_xZacatek, vektroVetvi[i]->_yZacatek, vektroVetvi[i]->_xKonec, vektroVetvi[i]->_yKonec);
	}
}

void ZLSystem::addVetev()
{
	int _ciklus = cikulus;

	int opakovani = pocetVetvi;
	for (int i = 0; i < opakovani; i++)
	{
		double velikost = delkaUsecky(*vektroVetvi[i]) /2;
		int posun = _ciklus;
		posun = 0;
		if (vektroVetvi[i]->_znak == 'A') {
			
			if (_ciklus > 1) {
				posun = velikost / _ciklus;
			}

			if (this->width() + posun < 700) {
				Vetev *novaVetevA = new Vetev(this->height() / 2, this->width() + posun, (this->height() / 2), this->width() - 150 + posun, 'A');
				vektroVetvi[pocetVetvi++] = novaVetevA;
				pocetVetvi++;
			}
			vytvorNoveVetve(*vektroVetvi[i], posun, velikost, i);
			posun = 0;
		}
		else if (vektroVetvi[i]->_znak == 'B') {
			vytvorNoveVetve(*vektroVetvi[i], posun, velikost, i);
		}
		else if (vektroVetvi[i]->_znak == 'C') {
			vytvorNoveVetve(*vektroVetvi[i], posun, velikost, i);
		}
		else if (vektroVetvi[i]->_znak == 'D') {
			vytvorNoveVetve(*vektroVetvi[i], posun, velikost, i);;
		}
		else if (vektroVetvi[i]->_znak == 'E') {
			vytvorNoveVetve(*vektroVetvi[i], posun, velikost, i);
		}
		else if (vektroVetvi[i]->_znak == 'F') {
			vytvorNoveVetve(*vektroVetvi[i], posun, velikost, i);
		}
		else if (vektroVetvi[i]->_znak == 'G') {
			vytvorNoveVetve(*vektroVetvi[i], posun, velikost, i);
		}
		else {
			continue;
		}
	}
}

void ZLSystem::timerFunction() {
	addVetev();
	std::this_thread::sleep_for(std::chrono::milliseconds(500));
	update();
	cikulus++;
	if (cikulus > 6) {
		timer->stop();
	}
	qDebug() << "update..";
}

int ZLSystem::delkaUsecky(Vetev vetev)
{
	return (int)sqrt(((pow((vetev._xKonec - vetev._xZacatek), 2)) + pow((vetev._yKonec - vetev._yZacatek), 2)));
}



