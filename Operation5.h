#ifndef OPERATION5_H
#define OPERATION5_H

#include "Operation.h"
class Operation5 :
	public Operation
{
public:
	Operation5(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse);
	~Operation5();
	bool effectuerOperation(Dechet* dechet);
};

#endif
