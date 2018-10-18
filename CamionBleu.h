#ifndef CAMIONBLEU_H
#define CAMIONBLEU_H
#include "Camion.h"
class CamionBleu :
	public Camion
{
public:
	CamionBleu();
	~CamionBleu();
	bool ajouterDechet(DechetTraiteRecyclable _dechetTraite);
};

#endif