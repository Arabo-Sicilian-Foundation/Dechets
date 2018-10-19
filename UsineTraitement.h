#ifndef USINETRAITEMENT_H
#define USINETRAITEMENT_H

#include "CamionBleu.h"
#include "CamionBrun.h"
#include "CamionVert.h"
#include "Dechet.h"
#include "ChargementDechet.h"
#include "SequenceOperations.h"
#include "Depot"
#include <string>

class UsineTraitement
{
public:
	UsineTraitement();
	~UsineTraitement();
	void chargerOperations(SequenceOperations* sequenceOperations);
	void demarrerTraitements(ChargementDechet* chargement);
private:
	void preOperation();
	void postOperation();
	void creerDechetTraiteRecyclable(Dechet* dechet);
	void creerDechetTraiteNonRecyclable(Dechet* dechet);
	void creerDechetTraiteCompostable(Dechet* dechet);
	void traiterDechet(Dechet* dechet);
	SequenceOperations* sequenceOperations;
	Depot depot;
	CamionVert* camionVert;
	CamionBleu* camionBleu;
	CamionBrun* camionBrun;

};

#endif