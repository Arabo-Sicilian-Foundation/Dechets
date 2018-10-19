#ifndef CREATIONDECHETTRAITENONRECYCLABLE
#define CREATIONDECHETTRAITENONRECYCLABLE

#include "OperationTraitement.h"

class CreationDechetTraiteNonRecyclable :
	public OperationTraitement
{
public:
	CreationDechetTraiteNonRecyclable(UsineTraitement* usineTraitement);
	~CreationDechetTraiteNonRecyclable();
	bool effectuerOperation(Dechet* dechet);
};

#endif
