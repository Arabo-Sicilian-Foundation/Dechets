#ifndef DECHETTRAITE_H
#define DECHETTRAITE_H

#include "Dechet.h"

class DechetTraite
{
public:
	DechetTraite();
	DechetTraite(Dechet* _dechet);
	~DechetTraite();
protected:
	Dechet* dechet;
};

#endif