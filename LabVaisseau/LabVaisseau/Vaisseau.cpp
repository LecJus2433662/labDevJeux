#include "Vaisseau.h"

Vaisseau::Vaisseau(int valeurMarchande, int attaque, int defense, int vie, int capacite, string nom, int niveau, int exp)
{
	this->valeurMarchande = valeurMarchande;
	this->attaque = attaque;
	this->defense = defense;
	this->vie = vie;
	this->capacite = capacite;
	this->nom = nom;
	this->niveau = niveau;
	this->exp = exp;
}
Vaisseau::~Vaisseau() {}
int Vaisseau::getAtt() 
{
	return attaque;
}
int Vaisseau::getDef() 
{
	return defense;
}
int Vaisseau::getVie()
{
	return vie;
}
string Vaisseau::to_String()
{
	string info;
	info.append("Nom : ");
	info.append(nom);
	info.append("\n");
	info.append("Attaque : ");
	info.append(std::to_string(attaque));
	info.append("\n");
	info.append("Defence : ");
	info.append(std::to_string(defense));
	info.append("\n");
	info.append("Vie : ");
	info.append(std::to_string(vie));
	info.append("\n");
	return info;
}

	