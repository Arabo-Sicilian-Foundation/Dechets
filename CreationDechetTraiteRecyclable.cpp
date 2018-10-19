#include "CreationDechetTraiteRecyclable.h"



CreationDechetTraiteRecyclable::CreationDechetTraiteRecyclable(UsineTraitement* usineTraitement)
{
}


CreationDechetTraiteRecyclable::~CreationDechetTraiteRecyclable()
{
}

bool CreationDechetTraiteRecyclable::effectuerOperation(Dechet* dechet)
{
	creerDechetTraiteRecyclable(dechet);
	return true;
}
