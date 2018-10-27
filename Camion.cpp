#include "Camion.h"


Camion::Camion()
{
}


Camion::Camion(int _maxCapacite)
{
	maxCapacite = _maxCapacite;
	capacite = 0;
}


Camion::~Camion()
{
}

bool Camion::ajouterDechet(DechetTraite* _dechetTraite)
{
	if (capacite < maxCapacite)
	{
		pileDechets.push(_dechetTraite);
		return true;
	}
	else
		return false;
}

int Camion::viderCamion()
{
	Dechet* dechet;
	int poidTotal = 0;
	while (!(pileDechets.empty()))
	{
		dechet = (Dechet*)pileDechets.top();
		poidTotal += dechet->getPoids();
		pileDechets.pop();
	}
	return poidTotal;
}