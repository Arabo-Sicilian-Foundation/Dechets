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
	int poidTotal = 0;
	while (!pileDechets.empty)
	{
		poidTotal += pileDechets.top.getPoids;
		pileDechets.pop();
	}
}