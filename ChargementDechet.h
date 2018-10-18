#ifndef CHARGEMENTDECHET_H
#define CHARGEMENTDECHET_H

#include <list>
#include "Dechet.h"

class ChargementDechet
{
public:
	ChargementDechet(std::list <Dechet*>* _listeDechets);
	~ChargementDechet();
	Dechet* getDechet() const { return listeDechets };
private:
	Dechet* listeDechets;

};

#endif