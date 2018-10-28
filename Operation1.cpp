#include "Operation1.h"



Operation1::Operation1(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse)
{
}


Operation1::~Operation1()
{
}

bool Operation1::effectuerOperation(Dechet* dechet)
{

	std::cout << "op1" << std::endl;
	if (dechet->estEnStyromousse() || dechet->estRigide())
		return true;
	else 
		return false;
}