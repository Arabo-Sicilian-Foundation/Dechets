#include "UsineTraitement.h"



UsineTraitement::UsineTraitement()
{
}


UsineTraitement::~UsineTraitement()
{
}
void UsineTraitement::chargerOperations(SequenceOperations* sequenceOperations)
{

}
void UsineTraitement::demarrerTraitements(ChargementDechet* chargement)
{
	Dechet* dechet;
	while ((dechet = chargement->getDechet) != NULL)
	{
		traiterDechet(dechet);
	}
	delete chargement;
	delete dechet;
}

void UsineTraitement::preOperation()
{

}
void UsineTraitement::postOperation()
{

}
void UsineTraitement::creerDechetTraiteRecyclable(Dechet* dechet)
{

}
void UsineTraitement::creerDechetTraiteNonRecyclable(Dechet* dechet)
{

}
void UsineTraitement::creerDechetTraiteCompostable(Dechet* dechet)
{

}
void UsineTraitement::traiterDechet(Dechet* dechet)
{

}