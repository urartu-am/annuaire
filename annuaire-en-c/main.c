#include <stdio.h>
#include <stdlib.h>
#include "menu_navigation.h"
#include "switcher_fonction.h"

int main()
{
    int res_choix;

    res_choix = menuNavigation(); // R�cup. de la val. retourn�e par menuNavigation

    switcherFonction(res_choix); // Affichage de la fonction souhait�e



    return 0;
}
