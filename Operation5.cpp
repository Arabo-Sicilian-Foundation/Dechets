#include "Operation5.h"



Operation5::Operation5(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse)
{
}


Operation5::~Operation5()
{
}

bool Operation5::effectuerOperation(Dechet* dechet)
{
	if (dechet->getMateriel == 6 && dechet->getCouleur == "Vert")
		return true;
	else
		return false;
}