#ifndef CHERGEMENT_DECHET
#define CHARGEMENT_DECHET

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

	Dechet* getDechet() const { return listeDechets.back(); }
};

#endif