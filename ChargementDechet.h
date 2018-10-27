#ifndef CHERGEMENT_DECHET_H
#define CHARGEMENT_DECHET_H

#include <list>
#include "Dechet.h"

class ChargementDechet :
	protected Dechet
{
private:
	std::list<Dechet*> listeDechets;

public:
	ChargementDechet(std::list <Dechet*>* listeDechets);
	~ChargementDechet();

	Dechet* getDechet();
};

#endif