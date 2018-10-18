#include "CamionBrun.h"



CamionBrun::CamionBrun()
{
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