#pragma once
class Vetev
{
public:
	 Vetev(int xZacatek, int yZacatek, int xKonec, int yKonec, char znak);
	~Vetev();

	int _xZacatek;
	int _xKonec;
	int _yZacatek;
	int _yKonec;
	char _znak;
};

