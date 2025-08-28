#include "Livraison.h"
Livraison::Livraison(int valeurMarchande, int attaque, int defense, int vie, int capacite, string nom, int niveau, int exp) : Vaisseau(valeurMarchande, attaque, defense, vie, capacite, nom, niveau, exp)
{

}
Livraison::~Livraison()
{
}
string Livraison::to_String()
{
	string info;
	info.append("jfais dla livraison");
	return info;
}
