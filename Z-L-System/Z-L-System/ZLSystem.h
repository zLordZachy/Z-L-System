#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ZLSystem.h"

class ZLSystem : public QMainWindow
{
	Q_OBJECT

public:
	ZLSystem(QWidget *parent = Q_NULLPTR);

private:
	Ui::ZLSystemClass ui;
};
