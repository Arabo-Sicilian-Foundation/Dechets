#include "CreationDechetTraiteCompostable.h"



CreationDechetTraiteCompostable::CreationDechetTraiteCompostable(UsineTraitement* _usineTraitement)
{
}


CreationDechetTraiteCompostable::~CreationDechetTraiteCompostable()
{
}

bool CreationDechetTraiteCompostable::effectuerOperation(Dechet* dechet)
{
	creerDechetTraiteCompostable(dechet);
	return true;
}