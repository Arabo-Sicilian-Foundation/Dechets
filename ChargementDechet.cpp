#include "ChargementDechet.h"


ChargementDechet::ChargementDechet(std::list<Dechet*>* listeDechets)
{
	while (!(listeDechets->empty()))
	{
		this->listeDechets.push_back(listeDechets->front());
		listeDechets->pop_front();
	}
}


ChargementDechet::~ChargementDechet()
{
}

Dechet* ChargementDechet::getDechet()
{
	Dechet* dechet;
	if (!listeDechets.empty())
	{
		dechet = listeDechets.back();
		listeDechets.pop_back();
		return dechet;
	}
	else
		return NULL;
}