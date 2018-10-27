#include "Depot.h"



Depot::Depot()
{
}


Depot::~Depot()
{
}

void Depot::depotDechetsTraites(CamionVert* _camion)
{
	totalDTNonRecyclable += _camion->viderCamion();
}
void Depot::depotDechetsTraites(CamionBleu* _camion)
{
	totalDTRecyclable += _camion->viderCamion();
}
void Depot::depotDechetsTraites(CamionBrun* _camion)
{
	totalDTCompostable += _camion->viderCamion();
}

std::ostream & operator<<(std::ostream & out, Depot const & depot)
{
	out << "-- DEPOT --" << std::endl
		<< " totalDTRecyclable    : " << depot.getCamionBleu() << std::endl
		<< " totalDTNonRecyclable : " << depot.getCamionVert() << std::endl
		<< " totalDTCompostable   : " << depot.getCamionBrun() << std::endl;

	return out;
}
