#ifndef DEPOT_H
#define DEPOT_H

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