#include <stdio.h>
#include <stdlib.h>
#include "switcher_fonction.h"
#include "structure.h"
#include "afficher_clients.h"
#include "ajouter_client.h"
#include "supprimmer_client.h"
#include "recherche_client.h"

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
        supprimerClient(tab, T);
        break;
    case 4:
        rechercheClient(tab, T);
        break;
    case 0:
        printf("======             A bientot            ======\n");
        break;
    default:
        perror(">> Valeur saisie invalide.\n");
        break;
    }
}
