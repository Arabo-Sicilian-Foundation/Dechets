#ifndef USINETRAITEMENT_H
#define USINETRAITEMENT_H

#include "CamionBleu.h"
#include "CamionBrun.h"
#include "CamionVert.h"
#include "Dechet.h"
#include "ChargementDechet.h"
#include "SequenceOperations.h"
#include "Depot.h"
#include <iostream>
#include <string>

using namespace std;

class UsineTraitement
{ 
public:
	
	class Log
	{
	public:
		static void i(string info) const { cout << info << endl; };
		static void i(Dechet const& dechet) const {};
		static void i(Depot const& depot) const {};
	};
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

	friend class OperationTraitement;

};

#endif