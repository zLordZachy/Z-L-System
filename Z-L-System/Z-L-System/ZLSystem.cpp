#include "ZLSystem.h"
#include "ui_ZLSystem.h"
#include <iostream>
#include <string>
using namespace std;

ZLSystem::ZLSystem(QWidget *parent)
	: QMainWindow(parent),
	ui(new Ui::ZLSystemClass)
{
	this->setFixedHeight(720);
	this->setFixedWidth(720);
	ui->setupUi(this);
	connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(exit()));
	//connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(addText()));

}

ZLSystem::~ZLSystem()
{
	delete ui;
}

void ZLSystem::exit()
{
	addText();
//	QApplication::exit();
}

QString ZLSystem::zapis() {
	return ui->label->text();

}

void ZLSystem::paintEvent(QPaintEvent *e) {
	QPainter painter(this);

	painter.drawLine(this->height()/2, this->width(), (this->height() / 2) , this->width() -50);
	painter.drawLine((this->height() / 2), this->width() - 50, (this->height() / 2)-20, this->width() - 50);
	painter.drawLine((this->height() / 2), this->width() - 50, (this->height() / 2) - 7, this->width() - 22);

}

void ZLSystem::addText()
{
	
	int t = this->height();
	ui->label->setText(""+t);
}

