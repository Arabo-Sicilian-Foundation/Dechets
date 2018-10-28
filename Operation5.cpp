#include "Operation5.h"



Operation5::Operation5(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse)
{
}


Operation5::~Operation5()
{
}

bool Operation5::effectuerOperation(Dechet* dechet)
{

	std::cout << "op5" << std::endl;
	if (dechet->getMateriel() == 6 && dechet->getCouleur() == "vert")
		return true;
	else
		return false;
}