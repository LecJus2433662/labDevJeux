#pragma once
#include <string>
using std::string;
#include "Vaisseau.h"
class Transport :
	public Vaisseau
{
public:
	virtual string to_String();
	Transport(int valeurMarchande, int attaque, int defense, int vie, int capacite, string nom, int niveau, int exp);
	~Transport();
};

