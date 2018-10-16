#ifndef DECHET_H
#define DECHET_H

#include <string>
class Dechet
{
public:
	Dechet();

	~Dechet();

	int getPoids() const { return poids; }
	int getId() const { return id; }
	std::string getDescription() const { return description; }
	int getType() const { return type; }
	int getCouleur() const { return couleur; }
	Materiel getMateriel() const { return materiel; }
	int getPurete() const { return purete; }
	bool estEnStyromousse() const { return styromousse; }
	bool estRigide() const { return rigide; }

private:
	int poids;
	int id;
	std::string description;
	int type;
	std::string couleur;
	Materiel materiel;
	iint purete;
	bool styromousse;
	bool rigide;
	int idCourant;

	void setPoids(int poids) { this->poids = poids; }
	void setDescription(std::string description) { this->description = description; }
	void setType(int type) { this - type = type; }
	void setCouleur(std::string couleur) { this->couleur = couleur; }
	void setPurete(int purete) { this->purete = purete; }

};

#endif
