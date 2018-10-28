#include "CamionVert.h"



CamionVert::CamionVert()
{
}

CamionVert::CamionVert(int _maxCapacite)
{
	maxCapacite = _maxCapacite;
	capacite = 0;
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
