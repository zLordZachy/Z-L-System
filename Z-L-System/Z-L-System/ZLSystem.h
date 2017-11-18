#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ZLSystem.h"

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
	void exit();

protected:
	void paintEvent(QPaintEvent *e);

private:
	void addText();
private:
	QString zapis();
};
