#include "CamionVert.h"



CamionVert::CamionVert()
{
}


CamionVert::~CamionVert()
{
}

bool CamionVert::ajouterDechetTraite(DechetTraiteNonRecyclable* _dechetTraite)
{
	if (capacite < maxCapacite)
	{
		pileDechets.push((DechetTraite*)_dechetTraite);
		return true;
	}
	else
		return false;
}
