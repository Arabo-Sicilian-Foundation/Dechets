#include "CreationDechetTraiteCompostable.h"



CreationDechetTraiteCompostable::CreationDechetTraiteCompostable(UsineTraitement* _usineTraitement)
{
	usineTraitement = _usineTraitement;
}


CreationDechetTraiteCompostable::~CreationDechetTraiteCompostable()
{
}

bool CreationDechetTraiteCompostable::effectuerOperation(Dechet* dechet)
{

	std::cout << "dc" << std::endl;
	creerDechetTraiteCompostable(dechet);
	return true;
}