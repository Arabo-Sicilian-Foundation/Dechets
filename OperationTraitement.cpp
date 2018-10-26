#include "OperationTraitement.h"

OperationTraitement::OperationTraitement()
{
}

OperationTraitement::OperationTraitement(UsineTraitement* _usineTraitement)
{
	usineTraitement = _usineTraitement;
}


OperationTraitement::~OperationTraitement()
{
}
bool OperationTraitement::effectuerOperation(Dechet* dechet)
{

}
void OperationTraitement::creerDechetTraiteRecyclable(Dechet* dechet)
{
	usineTraitement->creerDechetTraiteRecyclable(dechet);
}
void OperationTraitement::creerDechetTraiteNonRecyclable(Dechet* dechet)
{
	usineTraitement->creerDechetTraiteNonRecyclable(dechet);
}
void OperationTraitement::creerDechetTraiteCompostable(Dechet* dechet)
{
	usineTraitement->creerDechetTraiteCompostable(dechet);
}