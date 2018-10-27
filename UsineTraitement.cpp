#include "UsineTraitement.h"



UsineTraitement::UsineTraitement()
{
}


UsineTraitement::~UsineTraitement()
{
}
void UsineTraitement::chargerOperations(SequenceOperations* _sequenceOperations)
{
	sequenceOperations = _sequenceOperations;
}

void UsineTraitement::demarrerTraitements(ChargementDechet* chargement)
{
	Dechet* dechet;
	while ((dechet = chargement->getDechet()) != NULL)
	{
		traiterDechet(dechet);
	}
	delete chargement;
}

void UsineTraitement::preOperation()
{
	Log log;
	log.i("PREOPERATION");
}
void UsineTraitement::postOperation()
{
	Log log;
	log.i("POSTOPERATION");
}
void UsineTraitement::creerDechetTraiteRecyclable(Dechet* dechet)
{
	Log log;
	if (camionBleu->ajouterDechet((DechetTraiteRecyclable*)dechet))
	{
		log.i("AJOUT DTR" + std::to_string(dechet->getId()));
	}
	else
	{
		camionBleu->viderCamion();
		camionBleu->ajouterDechet((DechetTraiteRecyclable*)dechet);
		log.i("AJOUT DTR" + std::to_string(dechet->getId()));
	}
}
void UsineTraitement::creerDechetTraiteNonRecyclable(Dechet* dechet)
{
	Log log;
	if (camionVert->ajouterDechet((DechetTraiteNonRecyclable*)dechet))
	{
		log.i("AJOUT DTNR" + std::to_string(dechet->getId()));
	}
	else
	{
		camionVert->viderCamion();
		camionVert->ajouterDechet((DechetTraiteNonRecyclable*)dechet);
		log.i("AJOUT DTNR" + std::to_string(dechet->getId()));
	}
}
void UsineTraitement::creerDechetTraiteCompostable(Dechet* dechet)
{
	Log log;
	if (camionBrun->ajouterDechet((DechetTraiteCompostable*)dechet))
	{
		log.i("AJOUT DTC" + std::to_string(dechet->getId()));
	}
	else
	{
		camionBrun->viderCamion();
		camionBrun->ajouterDechet((DechetTraiteCompostable*)dechet);
		log.i("AJOUT DTC" + std::to_string(dechet->getId()));
	}
}
void UsineTraitement::traiterDechet(Dechet* dechet)
{
	Operation* operation = sequenceOperations->getOperationDemarage();
	bool choix;
	do
	{
		choix = operation->effectuerOperation(dechet);
		operation = operation->getOperationSuivante(choix);
	} while (operation != NULL);

}