#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "structure.h"
#include "afficher_clients.h"

void afficherClients(client *tab, int T)
{
    int i;

    // Boucle "for" qui affiche la liste de tous les clients
    for(i=0;i<T;i++)
    {
    printf("==============================\n");
    printf("No : %d\n", i);
    printf("Nom : %s\n", tab[i].nom);
    printf("Prenom : %s\n", tab[i].prenom);
    printf("Ville : %s\n", tab[i].ville);
    printf("CP : %s\n", tab[i].cp);
    printf("Telephone : %s\n", tab[i].tel);
    printf("Metier : %s\n", tab[i].metier);
    printf("==============================\n");
    }
}
