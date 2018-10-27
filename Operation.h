#ifndef OPERATION_H
#define OPERATION_H

#include "Dechet.h"

class Operation
{
protected:
	Operation();
public:
	Operation(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse);
	~Operation();
	bool effectuerOperation(Dechet* dechet);
	Operation* getOperationSuivante(bool choix);
private:
	Operation* operationSuivanteTrue;
	Operation* operationSuivanteFalse;

};

#endif

