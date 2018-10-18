#pragma once
#include "Camion.h"
class CamionBrun :
	public Camion
{
public:
	CamionBrun();
	~CamionBrun();
	bool ajouterDechetTraite(DechetTraiteCompostable* _dechetTraite);
};

