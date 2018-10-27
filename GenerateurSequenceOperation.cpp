#include "GenerateurSequenceOperations.h"
#include "Operation1.h"
#include "Operation2.h"
#include "Operation3.h"
#include "Operation4.h"
#include "Operation5.h"
#include "Operation6.h"


GenerateurSequenceOperations::GenerateurSequenceOperations()
{
}


GenerateurSequenceOperations::~GenerateurSequenceOperations()
{
}

SequenceOperations* GenerateurSequenceOperations::genererSequence(int id, UsineTraitement* usineTraitement)
{
	SequenceOperations* sequenceOperation = new SequenceOperations;
	CreationDechetTraiteCompostable* dc = new CreationDechetTraiteCompostable(usineTraitement);
	CreationDechetTraiteNonRecyclable* dnr = new CreationDechetTraiteNonRecyclable(usineTraitement);
	CreationDechetTraiteRecyclable* dr = new CreationDechetTraiteRecyclable(usineTraitement);
	Operation1* op1 = new Operation1(dnr, new Operation2(new Operation6(dnr, dr), new Operation3(dr, new Operation4(dc, new Operation5(dc, dnr)))));
	sequenceOperation->definirOperationDemarage(op1);

	return sequenceOperation;
}

SequenceOperations* GenerateurSequenceOperations::genererSequence0(UsineTraitement* usineTraitement)
{
	SequenceOperations* sequenceOperation = new SequenceOperations;
	CreationDechetTraiteCompostable* dc = new CreationDechetTraiteCompostable(usineTraitement);
	CreationDechetTraiteNonRecyclable* dnr = new CreationDechetTraiteNonRecyclable(usineTraitement);
	CreationDechetTraiteRecyclable* dr = new CreationDechetTraiteRecyclable(usineTraitement);
	Operation1* op1 = new Operation1(dnr, new Operation2(new Operation6(dnr, dr), new Operation3(dr, new Operation4(dc, new Operation5(dc, dnr)))));
	sequenceOperation->definirOperationDemarage(op1);
	return sequenceOperation;
}

SequenceOperations* GenerateurSequenceOperations::genererSequence1(UsineTraitement* usineTraitement)
{
	SequenceOperations* sequenceOperation = new SequenceOperations;
	CreationDechetTraiteCompostable* dc = new CreationDechetTraiteCompostable(usineTraitement);
	CreationDechetTraiteNonRecyclable* dnr = new CreationDechetTraiteNonRecyclable(usineTraitement);
	CreationDechetTraiteRecyclable* dr = new CreationDechetTraiteRecyclable(usineTraitement);
	Operation1* op1 = new Operation1(dnr, new Operation2(new Operation6(dnr, dr), new Operation3(dr, new Operation4(dc, new Operation5(dc, dnr)))));
	sequenceOperation->definirOperationDemarage(op1);
	return sequenceOperation;
}
