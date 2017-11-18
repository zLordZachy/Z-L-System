#include "Vetev.h"



Vetev::Vetev(int xZacatek, int yZacatek, int xKonec, int yKonec, char znak)
{
	this->_xKonec = xKonec;
	this->_yKonec = yKonec;
	this->_xZacatek = xZacatek;
	this->_yZacatek = yZacatek;
	this->_znak = znak;
}


Vetev::~Vetev()
{
}
