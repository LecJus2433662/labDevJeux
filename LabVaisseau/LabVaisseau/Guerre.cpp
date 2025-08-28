#include "Guerre.h"

Guerre::Guerre(int valeurMarchande, int attaque, int defense, int vie, int capacite, string nom, int niveau, int exp) : Vaisseau( valeurMarchande,  attaque,  defense,  vie,  capacite,  nom,  niveau,  exp)
{

}
Guerre::~Guerre()
{
}
string Guerre::to_String()
{
	string info;
	info.append("C'est pas ma guerre");
	return info;
}