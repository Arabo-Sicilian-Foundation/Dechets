#include "Operation4.h"



Operation4::Operation4(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse)
{
}


Operation4::~Operation4()
{
}

bool Operation4::effectuerOperation(Dechet* dechet)
{
	if (dechet->getMateriel == 5 && dechet->getCouleur == "brun")
		return true;
	else
		return false;
}