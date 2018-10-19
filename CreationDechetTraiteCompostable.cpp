#include "CreationDechetTraiteCompostable.h"



CreationDechetTraiteCompostable::CreationDechetTraiteCompostable(UsineTraitement* usineTraitement)
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