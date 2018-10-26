#include "GenerateurSequenceOperations.h"



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
	Operation* op1 = new Operation1(dnr, new Operation2(new Operation6(dnr, dr), new Operation3(dr, new Operation4(dc, new Operation5(dc, dnr)))));
	sequenceOperation->definirOperationDemarage(op1);
}

SequenceOperations* GenerateurSequenceOperations::genererSequence0(UsineTraitement* usineTraitement)
{
	SequenceOperations* sequenceOperation = new SequenceOperations;
	CreationDechetTraiteCompostable* dc = new CreationDechetTraiteCompostable(usineTraitement);
	CreationDechetTraiteNonRecyclable* dnr = new CreationDechetTraiteNonRecyclable(usineTraitement);
	CreationDechetTraiteRecyclable* dr = new CreationDechetTraiteRecyclable(usineTraitement);
	Operation* op1 = new Operation1(dnr, new Operation2(new Operation6(dnr, dr), new Operation3(dr, new Operation4(dc, new Operation5(dc, dnr)))));
	sequenceOperation->definirOperationDemarage(op1);
}

SequenceOperations* GenerateurSequenceOperations::genererSequence1(UsineTraitement* usineTraitement)
{
	SequenceOperations* sequenceOperation = new SequenceOperations;
	CreationDechetTraiteCompostable* dc = new CreationDechetTraiteCompostable(usineTraitement);
	CreationDechetTraiteNonRecyclable* dnr = new CreationDechetTraiteNonRecyclable(usineTraitement);
	CreationDechetTraiteRecyclable* dr = new CreationDechetTraiteRecyclable(usineTraitement);
	Operation* op1 = new Operation1(dnr, new Operation2(new Operation6(dnr, dr), new Operation3(dr, new Operation4(dc, new Operation5(dc, dnr)))));
	sequenceOperation->definirOperationDemarage(op1);
}
