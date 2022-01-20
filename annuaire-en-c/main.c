#include <stdio.h>
#include <stdlib.h>
#include "menu_navigation.h"
#include "switcher_fonction.h"
#include "structure.h"
#include "remplir_tableau.h"

#define T 5000

int main()
{
    int res_choix;
    client* tab = malloc(T* sizeof(client));
    remplirTableau(tab, T);


    res_choix = menuNavigation(); // Récup. de la val. retournée par menuNavigation

    switcherFonction(res_choix); // Affichage de la fonction souhaitée

    return 0;
}
