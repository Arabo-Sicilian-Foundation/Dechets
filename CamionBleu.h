#ifndef CAMIONBLEU_H
#define CAMIONBLEU_H

#include "Camion.h"
#include "DechetTraiteRecyclable.h"

class CamionBleu :
	public Camion
{
public:
	CamionBleu();
	CamionBleu(int _maxCapacite);
	~CamionBleu();
	bool ajouterDechet(DechetTraiteRecyclable* _dechetTraite);
};

#endif