#ifndef OPERATION2
#define OPERATION2

#include "Operation.h"
class Operation2 :
	public Operation
{
public:
	Operation2(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse);
	~Operation2();
	bool effectuerOperation(Dechet* dechet);
};

#endif
