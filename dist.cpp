#include <iostream>
int deviner(int mystere, int max_proposition);

using namespace std;

int main()/* fonction principale*/
{
	int nb_myst, prop_max, gagne_perdu;
	cout << "Bienvenue dans le jeu du plus ou moins, entrez un nombre a faire deviner" << endl;
	cin >> nb_myst;
	cout << "entrez maintenant un nombre d'essais maximal" << endl;
	cin >> prop_max;

	gagne_perdu = deviner(nb_myst, prop_max);
	if (gagne_perdu == (-1)) {
		cout << "vous avez perdu, bouh";
	}else {
		cout << "bien joue, vous avez trouve le nombre mystere en " << gagne_perdu << " essais";
	}
	return (0);
}	


int deviner(int mystere, int max_proposition){
	int nombre, i = 0;
	cout << "entrez un nombre";
	do {
		i = i + 1;
		cin >> nombre;
		if (nombre == mystere) {
			return i;
		}
		else {
			if (nombre < mystere) {
				cout << "trop petit, reessayez"<<endl;
			}
			else {
				cout << "trop grand, reessayez"<<endl;
			}
		}
	} while (nombre != mystere && i < max_proposition);/*tant que le nombre entré n'est pas le bon,
													   on continue à donner les indications +/-*/
	if (nombre == mystere) { /*si VRAI, c'est que l'on a trouvé mystere dans le nombre d'essais imparti*/
		return i;
	}else {
		return (-1); /*permet au programme de savoir que le joueur a perdu*/
	}
}
