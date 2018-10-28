#include "CamionBleu.h"



CamionBleu::CamionBleu()
{
}

CamionBleu::CamionBleu(int _maxCapacite)
{
	maxCapacite = _maxCapacite;
	capacite = 0;
}

CamionBleu::~CamionBleu() 
{
}

bool CamionBleu::ajouterDechet(DechetTraiteRecyclable* _dechetTraite)
{
	if (capacite < maxCapacite)
	{
		pileDechets.push((DechetTraite*)_dechetTraite);
		return true;
	}
	else
		return false;
}