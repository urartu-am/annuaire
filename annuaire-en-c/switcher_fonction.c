#include <stdio.h>
#include <stdlib.h>
#include "switcher_fonction.h"
#include "structure.h"
#include "afficher_clients.h"
#include "ajouter_client.h"

void switcherFonction(int choix, client *tab, int T)
{
    switch(choix)
    {
    case 1:
        afficherClients(tab, T);
        break;
    case 2:
        ajouterClient();
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
    case 0:
        printf("======             A bientot            ======\n");
        break;
    default:
        perror("Valeur saisie invalide.");
        break;
    }
}
