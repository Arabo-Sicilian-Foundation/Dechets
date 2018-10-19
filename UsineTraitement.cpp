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
	Log::i("PREOPERATION");
}
void UsineTraitement::postOperation()
{
	Log::i("POSTOPERATION");
}
void UsineTraitement::creerDechetTraiteRecyclable(Dechet* dechet)
{
	if (camionBleu->ajouterDechet((DechetTraiteRecyclable*)dechet))
	{
		Log::i("AJOUT DTR" + to_string(dechet->getId()));
	}
	else
	{
		camionBleu->viderCamion();
		camionBleu->ajouterDechet((DechetTraiteRecyclable*)dechet);
		Log::i("AJOUT DTR" + to_string(dechet->getId()));
	}
}
void UsineTraitement::creerDechetTraiteNonRecyclable(Dechet* dechet)
{
	if (camionVert->ajouterDechet((DechetTraiteNonRecyclable*)dechet))
	{
		Log::i("AJOUT DTNR" + to_string(dechet->getId()));
	}
	else
	{
		camionVert->viderCamion();
		camionVert->ajouterDechet((DechetTraiteNonRecyclable*)dechet);
		Log::i("AJOUT DTNR" + to_string(dechet->getId()));
	}
}
void UsineTraitement::creerDechetTraiteCompostable(Dechet* dechet)
{
	if (camionBrun->ajouterDechet((DechetTraiteCompostable*)dechet))
	{
		Log::i("AJOUT DTC" + to_string(dechet->getId()));
	}
	else
	{
		camionBrun->viderCamion();
		camionBrun->ajouterDechet((DechetTraiteCompostable*)dechet);
		Log::i("AJOUT DTC" + to_string(dechet->getId()));
	}
}
void UsineTraitement::traiterDechet(Dechet* dechet)
{

}