#ifndef STRUCTURE_H
#define STRUCTURE_H

struct Client
{
    char nom[50];
    char prenom[50];
    char ville[50];
    char cp[50];
    char tel[50];
    char metier[50];
};
typedef struct Client client;



#endif
