#ifndef DEPOT_H
#define DEPOT_H

#include "CamionBleu.h"
#include "CamionBrun.h"
#include "CamionVert.h"

class Depot
{
public:
	Depot();
	~Depot();
	CamionBleu* getCamionBleu() const {Camion* camionBleu = new Camion(40); return (CamionBleu*)camionBleu;};
	CamionVert* getCamionVert() const {Camion* camionVert = new Camion(40); return (CamionVert*)camionVert;};
	CamionBrun* getCamionBrun() const {Camion* camionBrun = new Camion(40); return (CamionBrun*)camionBrun;};
	void depotDechetsTraites(CamionVert* _camion);
	void depotDechetsTraites(CamionBleu* _camion);
	void depotDechetsTraites(CamionBrun* _camion);


private:
	int totalDTRecyclable;
	int totalDTNonRecyclable;
	int totalDTCompostable;
};

std::ostream & operator<<(std::ostream & out, Depot const & depot);

#endif