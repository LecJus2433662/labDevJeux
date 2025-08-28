#pragma once
#include <string>
#include "Vaisseau.h"
using std::string;
class Guerre :
	public Vaisseau
{
public:
	virtual string to_String();
	Guerre(int valeurMarchande, int attaque, int defense, int vie, int capacite, string nom, int niveau, int exp);
	~Guerre();
};

