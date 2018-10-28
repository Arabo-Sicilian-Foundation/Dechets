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

	std::cout << "dr" << std::endl;
	creerDechetTraiteRecyclable(dechet);
	return true;
}
