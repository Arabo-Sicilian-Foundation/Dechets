#ifndef CAMION_H
#define CAMION_H

#include <iostream>
#include <stack>
#include "DechetTraite.h"

class Camion
{
public:
	Camion(int _maxCapacite);
	~Camion();
	bool ajouterDechet(DechetTraite* _dechetTraite);
	int viderCamion();

private:
	int maxCapacite;
	int capacite;
	std::stack <DechetTraite*> pileDechets;

};

#endif