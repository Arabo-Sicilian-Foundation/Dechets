#ifndef OPERATION
#define OPERATION

#include "Dechet.h"
#include "UsineTraitement.h"

class Operation
{
public:
	Operation(Operation* operationSuivanteTrue,Operation* operationSuivanteFalse);
	~Operation();
	bool effectuerOperation(Dechet* dechet);
	Operation* getOperationSuivante(bool choix);

private:
	Operation* operationSuivanteTrue;
	Operation* operationSuivanteFalse;

protected:
	Operation();
};

#endif