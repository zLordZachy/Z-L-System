#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ZLSystem.h"
#include "Vetev.h"

#include <QtGui>
#include <QtCore>
#include <QTimer>

namespace Ui {
	class ZLSystem;
}

class ZLSystem : public QMainWindow
{
	Q_OBJECT

public:
	explicit ZLSystem(QWidget *parent = 0);
	~ZLSystem();

private:
	Ui::ZLSystemClass *ui;
	QTimer *timer;

public slots:
	void timerFunction();


private slots:
	void StartOnBt();

protected:
	void paintEvent(QPaintEvent *e);

private:
	void addVetev();

	int delkaUsecky(Vetev vetev);
private:
	QString zapis();

private: 
	void vytvorNoveVetve(Vetev vetev, int posun, int velikost, int index);
};
