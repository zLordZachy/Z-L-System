#include "ZLSystem.h"
#include "ui_ZLSystem.h"
#include "Vetev.h"
#include <iostream>
#include <string>
#include <list>
#include<math.h>
using namespace std;

static list<Vetev> listVetvi ;
static int cikulus = 1;

ZLSystem::ZLSystem(QWidget *parent)
	: QMainWindow(parent),
	ui(new Ui::ZLSystemClass)
{
	this->setFixedHeight(720);
	this->setFixedWidth(720);
	ui->setupUi(this);
	connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(NextLevl()));
	
	Vetev *vetev1 = new Vetev(this->height() / 2, this->width(), (this->height() / 2), this->width() - 150, 'A');
	listVetvi.push_front(*vetev1);
}

ZLSystem::~ZLSystem()
{
	delete ui;
}

void ZLSystem::NextLevl()
{
	addVetev();
	update();
//	QApplication::exit();
}

QString ZLSystem::zapis() {
	return ui->label->text();

}

void ZLSystem::paintEvent(QPaintEvent *e) {
	QPainter painter(this);

	for each (Vetev var in listVetvi)
	{
		painter.drawLine(var._xZacatek, var._yZacatek, var._xKonec, var._yKonec);
	}
	

}

void ZLSystem::addVetev()
{
	for each (Vetev vetev in listVetvi)
	{
		char znak = vetev._znak;
		if (vetev._znak == 'A') {
			int velikost = delkaUsecky(vetev)/2;
			Vetev *novaVetev = new Vetev(vetev._xKonec, vetev._yKonec, vetev._xKonec + velikost, vetev._yKonec - velikost, 'A');
			Vetev *novaVetev2 = new Vetev(vetev._xKonec, vetev._yKonec, vetev._xKonec - velikost, vetev._yKonec - velikost, 'B');
			listVetvi.push_front(*novaVetev);
			listVetvi.push_front(*novaVetev2);
		}
		if (vetev._znak == 'B') {
			int velikost2 = delkaUsecky(vetev) / 2;;
			Vetev *novaVetev3 = new Vetev(vetev._xKonec, vetev._yKonec, vetev._xKonec + velikost2, vetev._yKonec - velikost2, 'A');
			Vetev *novaVetev4 = new Vetev(vetev._xKonec, vetev._yKonec, vetev._xKonec - velikost2, vetev._yKonec - velikost2, 'B');
			Vetev *novaVetev5 = new Vetev(vetev._xKonec, vetev._yKonec, vetev._xKonec + velikost2+50, vetev._yKonec - velikost2-8, 'A');
			listVetvi.push_front(*novaVetev3);
			listVetvi.push_front(*novaVetev4);
			listVetvi.push_front(*novaVetev5);
		}
	
	}
	
}

int ZLSystem::delkaUsecky(Vetev vetev)
{

	return (int) sqrt(((pow((vetev._xKonec - vetev._xZacatek),2))+ pow((vetev._yKonec - vetev._yZacatek),2)));
}



