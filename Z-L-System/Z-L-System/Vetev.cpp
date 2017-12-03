#include "Vetev.h"

Vetev::Vetev() {
	this->_xKonec = 0;
	this->_yKonec = 0;
	this->_xZacatek = 0;
	this->_yZacatek = 0;
	this->_znak = 'A';
}

Vetev::Vetev(int xZacatek, int yZacatek, int xKonec, int yKonec, char znak)
{
	this->_xKonec = xKonec;
	this->_yKonec = yKonec;
	this->_xZacatek = xZacatek;
	this->_yZacatek = yZacatek;
	this->_znak = znak;
	this->_vykreslena = false;
}


Vetev::~Vetev()
{
}
