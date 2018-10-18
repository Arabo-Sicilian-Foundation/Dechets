#ifndef DECHETTRAITE_H
#define DECHETTRAITE_H

#include "Dechet.h"

class DechetTraite
{
public:
	DechetTraite(Dechet* _dechet);
	~DechetTraite();
private:
	Dechet* dechet;
};

#endif