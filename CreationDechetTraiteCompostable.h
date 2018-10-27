#ifndef CREATIONDECHETTRAITECOMPOSTABLE_H
#define CREATIONDECHETTRAITECOMPOSTABLE_H

#include "OperationTraitement.h"

class CreationDechetTraiteCompostable :
	public OperationTraitement
{
public:
	CreationDechetTraiteCompostable(UsineTraitement* usineTraitement);
	~CreationDechetTraiteCompostable();
	bool effectuerOperation(Dechet* dechet);
};

#endif