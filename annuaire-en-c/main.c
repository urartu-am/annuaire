#include <stdio.h>
#include <stdlib.h>
#include "menu_navigation.h"
#include "switcher_fonction.h"
#include "structure.h"
#include "remplir_tableau.h"

int main()
{
    FILE *fp = fopen("clients.txt", "r");

    int c;
    int l=0;

    while((c=fgetc(fp)) != EOF)
    {
	if(c=='\n')
		l++;
    }

    l=l+1;
    int T=l;

    /*****************************************************/

    int res_choix;
    client* tab = malloc(T* sizeof(client));
    remplirTableau(tab, T);


    res_choix = menuNavigation(); // R�cup. de la val. retourn�e par menuNavigation

    switcherFonction(res_choix, tab, T); // Affichage de la fonction souhait�e

    return 0;
}
