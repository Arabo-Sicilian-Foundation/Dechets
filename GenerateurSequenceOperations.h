#ifndef GENERATEURSEQUENCEOPERATIONS_H
#define GENERATEURSEQUENCEOPERATIONS_H

#include "UsineTraitement.h"
#include "SequenceOperations.h"

class GenerateurSequenceOperations
{
public:
	GenerateurSequenceOperations();
	~GenerateurSequenceOperations();
	SequenceOperations* genererSequence(int id, UsineTraitement* usineTraitement);
private:
	SequenceOperations* genererSequence0(UsineTraitement* usineTraitement);
	SequenceOperations* genererSequence1(UsineTraitement* usineTraitement);
};

#endif