#include "CamionBleu.h"



CamionBleu::CamionBleu()
{
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