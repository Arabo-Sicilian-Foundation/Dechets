#ifndef DEPOT_H
#define DEPOT_H

#include "Camion.h"
#include "CamionBleu.h"
#include "CamionBrun.h"
#include "CamionVert.h"

class Depot
{
public:
	Depot();
	~Depot();
	CamionBleu* getCamionBleu();
	CamionVert* getCamionVert();
	CamionBrun* getCamionBrun();
	void depotDechetsTraites(CamionVert* _camion);
	void depotDechetsTraites(CamionBleu* _camion);
	void depotDechetsTraites(CamionBrun* _camion);


private:
	int totalDTRecyclable;
	int totalDTNonRecyclable;
	int totalDTCompostable;
};

#endif