#ifndef CAMIONVERT_H
#define CAMIONVERT_H

#include "Camion.h"
#include "DechetTraiteNonRecyclable.h"

class CamionVert :
	public Camion
{
public:
	CamionVert();
	~CamionVert();
	bool ajouterDechetTraite(DechetTraiteNonRecyclable* _dechetTraite);
};

#endif