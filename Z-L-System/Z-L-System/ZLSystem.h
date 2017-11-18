#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ZLSystem.h"
#include "Vetev.h"

#include <QtGui>
#include <QtCore>

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

private slots:
	void NextLevl();

protected:
	void paintEvent(QPaintEvent *e);

private:
	void addVetev();

	int delkaUsecky(Vetev vetev);
private:
	QString zapis();
};
