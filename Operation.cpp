#include "Operation.h"



Operation::Operation()
{
	operationSuivanteFalse = NULL;
	operationSuivanteTrue = NULL;
}


Operation::~Operation()
{
}

Operation::Operation(Operation* _operationSuivanteTrue, Operation* _operationSuivanteFalse)
{
	operationSuivanteFalse = _operationSuivanteFalse;
	operationSuivanteTrue = _operationSuivanteTrue;
}

bool Operation::effectuerOperation(Dechet* dechet)
{

	return 0;
}

Operation* Operation::getOperationSuivante(bool choix)
{
	if (choix == true)
		return operationSuivanteTrue;
	else
		return operationSuivanteFalse;
}