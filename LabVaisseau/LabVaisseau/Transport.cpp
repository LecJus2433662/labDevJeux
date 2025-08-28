#include "Transport.h"
string Transport::to_String()
{
	std::string info = Vaisseau::to_String();
	info.append("jfais du transport");
	return info;
}

Transport::Transport(int valeurMarchande, int attaque, int defense, int vie, int capacite, string nom, int niveau, int exp) : Vaisseau(valeurMarchande, attaque, defense, vie, capacite, nom, niveau, exp)
{

}

Transport::~Transport()
{

}