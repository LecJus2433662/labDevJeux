#include <string>
#include <iostream>
#include "Faction.h"
#include "Vaisseau.h"
#include "Livraison.h"
#include "Guerre.h"
using std::string;
using std::cout;
using std::cin;
int main()
{
	Faction lesBlebis = Faction(100, 50, 1000, 10000, "Blebis");
	Faction lesNains = Faction(150, 50, 750, 7500, "Nains");

	Livraison vaisseauBlebis(100000, 47, 600, 690, 500, "vaisseauBlebis", 1, 0);
	Guerre vaisseauNain(100000, 47, 600, 690, 500, "vaisseauNain", 1, 0);
	cout << vaisseauBlebis.to_String() << std::endl;
	cout << lesBlebis.getNom() << std::endl;

}


