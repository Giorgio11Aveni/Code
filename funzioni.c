#include "data.h"

alberghi  *inizializza(char * nomefile, alberghi *p){

  info elem;
  alberghi *newElem;
 	FILE *fp;

 	if((fp=fopen(nomefile,"r"))!=NULL){
		while (fscanf(fp, "%[^,],%[^,],%[^,],%[^\n]\n", elem.nome, &(elem.stelle), &(elem.numero), &(elem.servizio)) != EOF) {
        newElem = (alberghi *)malloc(sizeof(alberghi));
        newElem->albergo = elem;
        newElem->next = p;
        p = newElem;
		}
	} else {
		printf("Errore nell'apertura del file\n");
	}

	fclose(fp);

  return p;
}

alberghi *inserisci(alberghi *p)
{
    char nome[MAX];
    char stelle[MAX];
    char numero[MAX];
    char servizio[MAX];
    info da_agg;
    alberghi *p2=NULL;

    printf("Inserisci le info dell'albergo\n");
    printf("Inserisci nome\n");
    scanf("\n%[^\n]",nome);
    strcpy(da_agg.nome, nome);
    printf("Inserisci stelle\n");
    scanf("\n%[^\n]", stelle);
    strcpy(da_agg.stelle, stelle);
    printf("Inserisci numero\n");
    scanf("\n%[^\n]", numero);
    strcpy(da_agg.numero, numero);
    printf("Inserisci elenco\n");
    scanf("\n%[^\n]",servizio);
    strcpy(da_agg.servizio, servizio);

    if(p!=NULL)
    {
        p2=(alberghi*)malloc(sizeof(alberghi));
        p2->albergo=da_agg;
        p2->next=p;
    }
    else
    {
        p=(alberghi*)malloc(sizeof(alberghi));
        p->next=NULL;
        p2=p;
    }
    return p2;
}

void stampa_s(alberghi *p)
{
    char servizio[50];

    printf("Inserisci il servizio che vuoi ricercare\n");
    scanf("%s", servizio);
    if(p==NULL){
        printf("Lista vuota.\n");
  } else {

        if(strcmp(p->albergo.servizio,servizio)==0)
        {
      printf("%s",p->albergo.nome);
      p = p->next;
        }else{
            printf("Il servizio che stai cercando non esiste.\n");
            }
        }
    }


void stampa_s_s(alberghi *p)
{
    char servizio[MAX];
    char stelle[MAX];

    printf("inserisci il servizio\n");
    scanf("%s", servizio);
    printf("inserisci il numero di stelle\n");
    scanf("%s", stelle);

    if(p==NULL){
        printf("Lista vuota.\n");
  } else {

        if(strcmp(p->albergo.servizio,servizio)==0 && strcmp(p->albergo.stelle,stelle)==0)
        {
      printf("%s",p->albergo.nome);
      p = p->next;
        }else{
            printf("Il servizio che stai cercando non esiste.\n");
            }
        }
}

void salva(alberghi *p)
{
    FILE *f=fopen("archivio.txt","w");

    while(p!=NULL)
    {
        fprintf(f,"%s/t%s\t%s\t%s\n",p->albergo.nome,p->albergo.stelle,p->albergo.numero,p->albergo.servizio);
        p=p->next;
    }
    fflush(f);
    fclose(f);

    return;
}
void printLista(alberghi *p){
  if(p==NULL){
    printf("Lista vuota.\n");
  } else {
    while(p!=NULL){
      printf("%s,%s,%s,%s\n", p->albergo.nome, p->albergo.stelle, p->albergo.numero, p->albergo.servizio);
      p = p->next;
      }
    }
}


