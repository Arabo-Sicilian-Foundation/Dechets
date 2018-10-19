#ifndef SEQUENCEOPERATIONS_H
#define SEQUENCEOPERATIONS_H

#include "Operation1.h"
#include "Operation2.h"
#include "Operation3.h"
#include "Operation4.h"
#include "Operation5.h"
#include "Operation6.h"

class SequenceOperations
{
public:
	SequenceOperations();
	~SequenceOperations();
	SequenceOperations* ajouterOperation(Operation* operation);
	void definirOperationDemarage(Operation* operation);
	Operation* getOperationDemarage();
private:
	Operation* listeOperations;
	Operation* operationDemarage;
};

#endif