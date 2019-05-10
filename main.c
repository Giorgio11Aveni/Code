#include "data.h"

int main()
{
    alberghi *lista=NULL;
    int scelta;

    for(;;)
    {
        printf("Scegli quello che vuoi fare\n");
        printf("1)Inizializza lista\n");
        printf("2)Visualizza gli alberghi con servizio x\n");
        printf("3)Visualizza gli alberghi con stelle y e servizio x\n");
        printf("4)Inserisci albergo\n");
        printf("5)Salva\n");
        printf("6)stampa\n");
        scanf("%d",&scelta);

        if(scelta==1)
        {
            lista=inizializza("alberghi.txt",lista);
        }
        else if(scelta==2)
        {
            stampa_s(lista);
        }
        else if(scelta==3)
        {
            stampa_s_s(lista);
        }
        else if(scelta==4)
        {
            lista=inserisci(lista);
        }
        else if(scelta==5)
        {
            salva(lista);
        }
        else if (scelta==6)
        {
            printLista(lista);
        }
        else
        {
            break;
        }
    }
}

