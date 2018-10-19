#include "CreationDechetTraiteNonRecyclable.h"



CreationDechetTraiteNonRecyclable::CreationDechetTraiteNonRecyclable(UsineTraitement* usineTraitement)
{
}


CreationDechetTraiteNonRecyclable::~CreationDechetTraiteNonRecyclable()
{
}

bool CreationDechetTraiteNonRecyclable::effectuerOperation(Dechet* dechet)
{
	creerDechetTraiteCompostable(dechet);
	return true;
}