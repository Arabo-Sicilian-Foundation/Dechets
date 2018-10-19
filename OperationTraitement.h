#ifndef OPERATIONTRAITEMENT
#define OPERATIONTRAITEMENT

#include "Operation.h"

class OperationTraitement :
	public Operation
{
public:
	OperationTraitement(UsineTraitement* usineTraitement);
	OperationTraitement();
	~OperationTraitement();
	bool effectuerOperation(Dechet* dechet);
private:
	UsineTraitement* usineTraitment;
protected:
	void creerDechetTraiteRecyclable(Dechet* dechet);
	void creerDechetTraiteNonRecyclable(Dechet* dechet);
	void creerDechetTraiteCompostable(Dechet* dechet);
};

#endif