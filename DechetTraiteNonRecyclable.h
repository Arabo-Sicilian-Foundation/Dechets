#ifndef DECHETTRAITENONRECYCLABLE
#define DECHETTRAITENONRECYCLABLE

#include "DechetTraite.h"

class DechetTraiteNonRecyclable :
	public DechetTraite
{
public:
	DechetTraiteNonRecyclable(Dechet* _dechet);
	~DechetTraiteNonRecyclable();
};

#endif