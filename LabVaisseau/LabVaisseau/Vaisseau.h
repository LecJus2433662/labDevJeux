#pragma once
#include <string>
using std::string;
class Vaisseau
{
private:
	int valeurMarchande;
	int attaque;
	int defense;
	int vie;
	int capacite;
	string nom;
	int niveau;
	int exp;

public:
	Vaisseau(int valeurMarchande, int attaque, int defense, int vie, int capacite, string nom, int niveau, int exp);
	~Vaisseau();
	int	getAtt();
	int getDef();
	int getVie();
	virtual string to_String();

};

