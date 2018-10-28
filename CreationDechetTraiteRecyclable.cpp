#include "CreationDechetTraiteRecyclable.h"



CreationDechetTraiteRecyclable::CreationDechetTraiteRecyclable(UsineTraitement* _usineTraitement)
{
	usineTraitement = _usineTraitement;
}


CreationDechetTraiteRecyclable::~CreationDechetTraiteRecyclable()
{
}

bool CreationDechetTraiteRecyclable::effectuerOperation(Dechet* dechet)
{

	creerDechetTraiteRecyclable(dechet);
	return true;
}
