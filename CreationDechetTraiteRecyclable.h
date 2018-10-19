#ifndef CREATIONDECHETTRAITERECYCLABLE
#define CREATIONDECHETTRAITERECYCLABLE

#include "OperationTraitement.h"

class CreationDechetTraiteRecyclable :
	public OperationTraitement
{
public:
	CreationDechetTraiteRecyclable(UsineTraitement usineTraitment);
	~CreationDechetTraiteRecyclable();
	bool effectuerOperation(Dechet* dechet);
};

#endif
