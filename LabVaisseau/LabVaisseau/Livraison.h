#pragma once
#include <string>
using std::string;
#include "Vaisseau.h"
class Livraison :
	public Vaisseau
{
public:
	virtual string to_String();

	Livraison(int valeurMarchande, int attaque, int defense, int vie, int capacite, string nom, int niveau, int exp);
	~Livraison();
	
};

