#include <iostream>
#include "UQAC.h"
#include "GenerateurSequenceOperations.h"

using namespace std;

int Dechet::idCourant = 0;

void laboratoire2()
{
	int i;
	UQAC* uqac = new UQAC;
	ChargementDechet* chargement = uqac->getChargementDechets();
	UsineTraitement* usineTraitement = new UsineTraitement();
	GenerateurSequenceOperations gso;

	usineTraitement->chargerOperations(gso.genererSequence(0, usineTraitement));
	cout << "here" << endl;
	usineTraitement->demarrerTraitements(chargement);

	delete usineTraitement;
	delete uqac;

	cin >> i;

}
int main()
{
	laboratoire2();


	return 0;
}