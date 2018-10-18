#include <iostream>
#include "Dechet.h"

using namespace std;

int Dechet::idCourant = 0;

int main()
{
	Dechet *d = new Dechet();

	cout << "hello" << endl;
	cout << d << endl;

	return 0;
}