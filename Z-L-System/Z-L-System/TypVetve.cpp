#include "TypVetve.h"


Vetev* TypVetve::VytvorNovouVetevDleTypu(Vetev puvodniVetev, int typVetve, int posun, int velikost)
{
	Vetev *novaVetev;
	switch (typVetve){
		case 1 :
			novaVetev = new Vetev(puvodniVetev._xKonec, puvodniVetev._yKonec, puvodniVetev._xKonec + velikost, puvodniVetev._yKonec - velikost + posun, 'B');
			break;
		case 2: 
			novaVetev = new Vetev(puvodniVetev._xKonec, puvodniVetev._yKonec, puvodniVetev._xKonec + velikost - (velikost / 2), puvodniVetev._yKonec - velikost, 'C');
			break;
		case 3:
			novaVetev = new Vetev(puvodniVetev._xKonec, puvodniVetev._yKonec, puvodniVetev._xKonec - velikost / 5, puvodniVetev._yKonec - velikost, 'D');
			break;
		case 4:
			novaVetev = new Vetev(puvodniVetev._xKonec, puvodniVetev._yKonec, puvodniVetev._xKonec - velikost, puvodniVetev._yKonec - velikost + posun, 'E');
			break;
		case 5:
			novaVetev = new Vetev(puvodniVetev._xKonec, puvodniVetev._yKonec, puvodniVetev._xKonec - velikost / 2, puvodniVetev._yKonec - velikost, 'F');
			break;
		case 6:
			novaVetev = new Vetev(puvodniVetev._xKonec, puvodniVetev._yKonec, puvodniVetev._xKonec + velikost / 5, puvodniVetev._yKonec - velikost, 'G');
			break;
	}

	return novaVetev;
}
