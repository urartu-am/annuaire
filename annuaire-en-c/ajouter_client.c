#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ajouter_client.h"

void ajouterClient(void)
{
    char nom[50];
    char prenom[50];
    char ville[50];
    char cp[50];
    char tel[50];
    char metier[50];

    char null[1]; // fix fgets automatic skipping bug

    char *positionEntree = NULL;

    FILE *fp;

    fp = fopen("clients.txt", "a");

    fprintf(fp,"\n");

    fgets(null, 50, stdin); // fix fgets automatic skipping bug

    printf("Saisir le nom : ");
    fgets(nom, 50, stdin);
     positionEntree = strchr(nom, '\n');
        if (positionEntree != NULL)
        {
            *positionEntree = '\0';
        }
    fprintf(fp,"%s,", nom);

    printf("\nSaisir le prenom : ");
    fgets(prenom, 50, stdin);
     positionEntree = strchr(prenom, '\n');
        if (positionEntree != NULL)
        {
            *positionEntree = '\0';
        }
    fprintf(fp,"%s,", prenom);

    printf("\nSaisir la ville : ");
    fgets(ville, 50, stdin);
     positionEntree = strchr(ville, '\n');
        if (positionEntree != NULL)
        {
            *positionEntree = '\0';
        }
    fprintf(fp,"%s,", ville);

    printf("\nSaisir le code postal : ");
    fgets(cp, 50, stdin);
     positionEntree = strchr(cp, '\n');
        if (positionEntree != NULL)
        {
            *positionEntree = '\0';
        }
    fprintf(fp,"%s,", cp);

    printf("\nSaisir le numero de telephone : ");
    fgets(tel, 50, stdin);
     positionEntree = strchr(tel, '\n');
        if (positionEntree != NULL)
        {
            *positionEntree = '\0';
        }
    fprintf(fp,"%s,", tel);

    printf("\nSaisir la profession : ");
    fgets(metier, 50, stdin);
     positionEntree = strchr(metier, '\n');
        if (positionEntree != NULL)
        {
            *positionEntree = '\0';
        }
    fprintf(fp,"%s", metier);

    fclose(fp);
}
