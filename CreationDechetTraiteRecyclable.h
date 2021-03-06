#ifndef CREATIONDECHETTRAITERECYCLABLE_H
#define CREATIONDECHETTRAITERECYCLABLE_H

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
