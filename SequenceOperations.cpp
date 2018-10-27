#include "SequenceOperations.h"



SequenceOperations::SequenceOperations()
{
}


SequenceOperations::~SequenceOperations()
{
}

SequenceOperations* SequenceOperations::ajouterOperation(Operation* operation)
{
	return NULL;

}

void SequenceOperations::definirOperationDemarage(Operation* operation)
{
	operationDemarage = operation;
}

Operation* SequenceOperations::getOperationDemarage()
{
	return operationDemarage;
}