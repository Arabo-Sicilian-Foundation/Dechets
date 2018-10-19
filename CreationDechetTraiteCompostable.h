#ifndef CREATIONDECHETTRAITECOMPOSTABLE
#define CREATIONDECHETTRAITECOMPOSTABLE

#include "OperationTraitement.h"

class CreationDechetTraiteCompostable :
	public OperationTraitement
{
public:
	CreationDechetTraiteCompostable(UsineTraitement usineTraitment);
	~CreationDechetTraiteCompostable();
	bool effectuerOperation(Dechet* dechet);
};

#endif