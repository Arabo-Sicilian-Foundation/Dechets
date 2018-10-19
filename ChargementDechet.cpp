#include "ChargementDechet.h"


ChargementDechet::ChargementDechet(std::list<Dechet*>* listeDechets)
{
	while(!(listeDechets->empty()))
	{
		this->listeDechets.push_back(listeDechets->front());
		listeDechets->pop_front();
	}
}


ChargementDechet::~ChargementDechet()
{
}