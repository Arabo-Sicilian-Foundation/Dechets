#include "Depot.h"



Depot::Depot()
{
}


Depot::~Depot()
{
}

void Depot::depotDechetsTraites(CamionVert* _camion)
{
	totalDTNonRecyclable += _camion->viderCamion;
}
void Depot::depotDechetsTraites(CamionBleu* _camion)
{
	totalDTRecyclable += _camion->viderCamion;
}
void Depot::depotDechetsTraites(CamionBrun* _camion)
{
	totalDTCompostable += _camion->viderCamion;
}