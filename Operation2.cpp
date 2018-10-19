#include "Operation2.h"



Operation2::Operation2(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse)
{
}


Operation2::~Operation2()
{
}

bool Operation2::effectuerOperation(Dechet* dechet)
{
	if (dechet->getMateriel == 2)
		return true;
	else
		return false;
}