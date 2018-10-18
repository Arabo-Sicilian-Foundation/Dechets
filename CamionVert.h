#pragma once
#include "Camion.h"
class CamionVert :
	public Camion
{
public:
	CamionVert();
	~CamionVert();
	bool ajouterDechetTraite(DechetNonRecyclable* _dechetTraite);
};

