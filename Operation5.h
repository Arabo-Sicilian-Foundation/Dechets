#ifndef OPERATION5
#define OPERATION5

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