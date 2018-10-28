#include "CamionBrun.h"



CamionBrun::CamionBrun()
{
}

CamionBrun::CamionBrun(int _maxCapacite)
{
	maxCapacite = _maxCapacite;
	capacite = 0;
}

CamionBrun::~CamionBrun()
{
}

bool CamionBrun::ajouterDechetTraite(DechetTraiteCompostable* _dechetTraite)
{
	if (capacite < maxCapacite)
	{
		pileDechets.push((DechetTraite*)_dechetTraite);
		return true;
	}
	else
		return false;
}