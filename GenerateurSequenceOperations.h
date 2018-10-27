#ifndef GENERATEURSEQUENCEOPERATIONS_H
#define GENERATEURSEQUENCEOPERATIONS_H

#include "UsineTraitement.h"
#include "CreationDechetTraiteCompostable.h"
#include "CreationDechetTraiteNonRecyclable.h"
#include "CreationDechetTraiteRecyclable.h"

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