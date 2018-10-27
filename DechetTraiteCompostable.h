#ifndef DECHETTRAITECOMPOSTABLE_H
#define DECHETTRAITECOMPOSTABLE_H

#include "DechetTraite.h"

class DechetTraiteCompostable :
	public DechetTraite
{
public:
	DechetTraiteCompostable(Dechet* _dechet);
	~DechetTraiteCompostable();
};

#endif