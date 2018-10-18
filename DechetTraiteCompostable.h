#ifndef DECHETTRAITECOMPOSTABLE
#define DECHETTRAITECOMPOSTABLE

#include "DechetTraite.h"

class DechetTraiteCompostable :
	public DechetTraite
{
public:
	DechetTraiteCompostable(Dechet* _dechet);
	~DechetTraiteCompostable();
};

#endif