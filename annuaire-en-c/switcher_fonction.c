#include <stdio.h>
#include <stdlib.h>
#include "switcher_fonction.h"

void switcherFonction(int choix)
{
    switch(choix)
    {
    case 1:
        // fonction "Afficher la liste de tous les clients"
        break;
    case 2:
        // fonction "Ajouter un client"
        break;
    case 3:
        // fonction "Supprimer un client"
        break;
    case 4:
        // fonction "Rechercher un client"
        break;
    case 5:
        // fonction "Filtrer"
        break;
    default:
        perror("Valeur saisie invalide.");
        break;
    }
}
