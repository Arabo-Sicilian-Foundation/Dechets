#ifndef CREATIONDECHETTRAITERECYCLABLE
#define CREATIONDECHETTRAITERECYCLABLE

#include "OperationTraitement.h"

class CreationDechetTraiteRecyclable :
	public OperationTraitement
{
public:
	CreationDechetTraiteRecyclable(UsineTraitement* usineTraitement);
	~CreationDechetTraiteRecyclable();
	bool effectuerOperation(Dechet* dechet);
};

#endif
