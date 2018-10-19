#ifndef OPERATION4
#define OPERATION4

#include "Operation.h"
class Operation4 :
	public Operation
{
public:
	Operation4(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse);
	~Operation4();
	bool effectuerOperation(Dechet* dechet);
};

#endif