#include "Operation3.h"



Operation3::Operation3(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse)
{
}


Operation3::~Operation3()
{
}

bool Operation3::effectuerOperation(Dechet* dechet)
{
	if (dechet->getMateriel() == 0 || dechet->getMateriel() == 7)
		return true;
	else
		return false;
}
