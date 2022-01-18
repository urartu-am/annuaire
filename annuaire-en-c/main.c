#include <stdio.h>
#include <stdlib.h>
#include "menu_navigation.h"
#include "switcher_fonction.h"

int main()
{
    int res_choix;

    res_choix = menuNavigation(); // Récup. de la val. retournée par menuNavigation

    switcherFonction(res_choix); // Affichage de la fonction souhaitée



    return 0;
}
