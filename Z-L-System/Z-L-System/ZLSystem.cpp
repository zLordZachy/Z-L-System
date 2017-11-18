#include "ZLSystem.h"

ZLSystem::ZLSystem(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(exit()));
}

ZLSystem::~ZLSystem()
{

}

void ZLSystem::exit()
{
	QApplication::exit();
}