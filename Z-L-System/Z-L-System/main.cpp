#include "ZLSystem.h"
#include <time.h>
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	srand(time(0));
	QApplication a(argc, argv);
	ZLSystem w;
	w.show();
	return a.exec();
	
}
