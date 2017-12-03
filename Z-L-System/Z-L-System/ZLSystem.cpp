#include "ZLSystem.h"
#include "ui_ZLSystem.h"
#include "Vetev.h"
#include <iostream>
#include <string>
#include <list>
#include<math.h>
#include <thread>
#include <QDebug>
#include <vector>
using namespace std;

//static list<Vetev> listVetvi ;
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
	/*Vetev *novaVetevB = new Vetev(vetev._xKonec - posun  , vetev._yKonec + posun , vetev._xKonec + velikost - posun, vetev._yKonec - velikost + posun, 'B');;
	Vetev *novaVetevC = new Vetev(novaVetevB->_xKonec, novaVetevB->_yKonec, novaVetevB->_xKonec + velikost - (velikost / 2), novaVetevB->_yKonec - velikost, 'C');;
	Vetev *novaVetevD = new Vetev(novaVetevC->_xKonec, novaVetevC->_yKonec, novaVetevC->_xKonec - velikost / 5, novaVetevC->_yKonec - velikost, 'D');

	Vetev *novaVetevE = new Vetev(vetev._xKonec +posun , vetev._yKonec + posun , vetev._xKonec - velikost + posun, vetev._yKonec - velikost + posun, 'E');
	Vetev *novaVetevF = new Vetev(novaVetevE->_xKonec, novaVetevE->_yKonec, novaVetevE->_xKonec - velikost / 2, novaVetevE->_yKonec - velikost, 'F');
	Vetev *novaVetevG = new Vetev(novaVetevF->_xKonec, novaVetevF->_yKonec, novaVetevF->_xKonec + velikost / 5, novaVetevF->_yKonec - velikost, 'G');*/

	/*Vetev *novaVetevB = new Vetev(vetev._xKonec + posun, vetev._yKonec - posun, vetev._xKonec + velikost - posun, vetev._yKonec - velikost - posun, 'B');;
	Vetev *novaVetevC = new Vetev(novaVetevB->_xKonec, novaVetevB->_yKonec, novaVetevB->_xKonec + velikost - (velikost / 2), novaVetevB->_yKonec - velikost, 'C');;
	Vetev *novaVetevD = new Vetev(novaVetevC->_xKonec, novaVetevC->_yKonec, novaVetevC->_xKonec - velikost / 5, novaVetevC->_yKonec - velikost, 'D');

	Vetev *novaVetevE = new Vetev(vetev._xKonec + posun, vetev._yKonec + posun, vetev._xKonec - velikost + posun, vetev._yKonec - velikost + posun, 'E');
	Vetev *novaVetevF = new Vetev(novaVetevE->_xKonec, novaVetevE->_yKonec, novaVetevE->_xKonec - velikost / 2, novaVetevE->_yKonec - velikost, 'F');
	Vetev *novaVetevG = new Vetev(novaVetevF->_xKonec, novaVetevF->_yKonec, novaVetevF->_xKonec + velikost / 5, novaVetevF->_yKonec - velikost, 'G');*/

	if (vetev._vykreslena == true) {
		return;
	}

	Vetev *novaVetevB = new Vetev(vetev._xKonec, vetev._yKonec + posun, vetev._xKonec + velikost, vetev._yKonec - velikost + posun, 'B');;
	Vetev *novaVetevC = new Vetev(novaVetevB->_xKonec, novaVetevB->_yKonec, novaVetevB->_xKonec + velikost - (velikost / 2), novaVetevB->_yKonec - velikost, 'C');;
	Vetev *novaVetevD = new Vetev(novaVetevC->_xKonec, novaVetevC->_yKonec, novaVetevC->_xKonec - velikost / 5, novaVetevC->_yKonec - velikost, 'D');
	
	Vetev *novaVetevE = new Vetev(vetev._xKonec, vetev._yKonec + posun, vetev._xKonec - velikost, vetev._yKonec - velikost + posun, 'E');
	Vetev *novaVetevF = new Vetev(novaVetevE->_xKonec, novaVetevE->_yKonec, novaVetevE->_xKonec - velikost / 2, novaVetevE->_yKonec - velikost, 'F');
	Vetev *novaVetevG = new Vetev(novaVetevF->_xKonec, novaVetevF->_yKonec, novaVetevF->_xKonec + velikost / 5, novaVetevF->_yKonec - velikost, 'G');

	
	vektroVetvi[pocetVetvi++] = novaVetevB;
	vektroVetvi[pocetVetvi++] = novaVetevC;
	vektroVetvi[pocetVetvi++] = novaVetevD;

	vektroVetvi[pocetVetvi++] = novaVetevE;
	vektroVetvi[pocetVetvi++] = novaVetevF;
	vektroVetvi[pocetVetvi++] = novaVetevG;
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



