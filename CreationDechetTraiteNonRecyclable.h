#ifndef CREATIONDECHETTRAITENONRECYCLABLE
#define CREATIONDECHETTRAITENONRECYCLABLE

#include "OperationTraitement.h"

class CreationDechetTraiteNonRecyclable :
	public OperationTraitement
{
public:
	CreationDechetTraiteNonRecyclable(UsineTraitement* usineTraitment);
	~CreationDechetTraiteNonRecyclable();
	bool effectuerOperation(Dechet* dechet);
};

#endif
