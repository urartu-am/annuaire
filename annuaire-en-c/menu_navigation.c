#include <stdio.h>
#include <stdlib.h>
#include "menu_navigation.h"

int menuNavigation(void)
{
    int choix=0;

    printf("======        Menu de navigation        ======\n");
    printf("(1) - Afficher la liste de tous les clients\n");
    printf("(2) - Ajouter un client\n");
    printf("(3) - Supprimer un client\n");
    printf("(4) - Rechercher un client\n");
    printf("(5) - Filtrer\n");

    while(choix<1 || choix>5)
    {
        printf("======               Choix              ======\n");
        scanf("%d", &choix);
    }

    return choix;
}
