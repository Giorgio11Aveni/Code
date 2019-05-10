#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 80

typedef struct
{
    char nome[MAX];
    char stelle[MAX];
    char numero[MAX];
    char servizio[MAX];

}info;

struct alberghi
{
    info albergo;
    struct alberghi *next;
};

typedef struct alberghi alberghi;

alberghi *inizializza(char *,alberghi *p);
void stampa_s(alberghi *p);
void stampa_s_s(alberghi *p);
alberghi *inserisci(alberghi *p);
void salva(alberghi *p);
void printLista(alberghi *p);
