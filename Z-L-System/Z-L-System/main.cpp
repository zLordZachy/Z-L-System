#include "ZLSystem.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ZLSystem w;
	w.show();
	return a.exec();
	
}
