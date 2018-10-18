#include "Dechet.h"


Dechet::Dechet()
{
	idCourant++;

	id = idCourant;
	setPoids(0);
	setDescription("");
	setType(0);
	setCouleur("");
	materiel = INCONNU;
	setPurete(1);
	styromousse = false;
	rigide = false;
}


Dechet::~Dechet()
{
}

Dechet::Dechet(int poids, std::string description, int type, std::string couleur, Materiel materiel, int purete, bool estEnStyromousse, bool rigide)
{
	idCourant++;
	
	id = idCourant;
	setPoids(poids);
	setDescription(description);
	setType(type);
	setCouleur(couleur);
	this->materiel = materiel;
	setPurete(purete);
	styromousse = estEnStyromousse;
	this->rigide = rigide;
}

Dechet::Dechet(int poids, std::string description)
{
	Dechet();
	setPoids(poids);
	setDescription(description);
}

void Dechet::setPoids(int poids)
{
	if (poids >= 0 && poids <= 100)
	{
		this->poids = poids;
	}
}

void Dechet::setDescription(std::string description)
{
	if (description.length() < 3)
	{
		this->description = "???";
	}
	else
	{
		this->description = description;
	}
}

void Dechet::setType(int type)
{
	if (type > 0 && type <= 7)
	{
		this->type = type;
	}
}

void Dechet::setCouleur(std::string couleur)
{
	if (couleur == "brun" || couleur == "vert")
	{
		this->couleur = couleur;
	}
	else
	{
		this->couleur = "inconnu";
	}
}

void Dechet::setPurete(int purete)
{
	if (purete <= 1 || purete <= 100)
	{
		this->purete = purete;
	}
}
