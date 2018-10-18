#ifndef DECHETTRAITERECYCLABLE
#define DECHETTRAITERECYCLABLE

#include "DechetTraite.h"

class DechetTraiteRecyclable :
	public DechetTraite
{
public:
	DechetTraiteRecyclable(Dechet* _dechet);
	~DechetTraiteRecyclable();
};

#endif