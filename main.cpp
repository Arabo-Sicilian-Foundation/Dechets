#include <iostream>
#include "UQAC.h"
#include "GenerateurSequenceOperations.h"

using namespace std;

int Dechet::idCourant = 0;

void laboratoire2()
{
	int i;
	SequenceOperations* sqop = new SequenceOperations;
	UQAC* uqac = new UQAC;
	ChargementDechet* chargement = uqac->getChargementDechets();
	UsineTraitement* usineTraitement = new UsineTraitement();
	GenerateurSequenceOperations gso;
	Operation2* op2 = new Operation2(NULL,NULL);
	Operation3* op3 = new Operation3(op2, NULL);
	Operation1* op1 = new Operation1(op3, op2);


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