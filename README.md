# Code

Egregio prof La Rosa, ho ricaricato i file aggiornati seguendo le istruzioni che mi aveva inviato per email. le modifiche che ho apportato al codice sono:
-Sostituire fgets con fscanf per semplici motivi pratici, mi sono trovato meglio con fscanf.
-Nella funzione di inserimento ho notato che non riuscivo a inserire correttamente i dati perche la fscanf non accetta frasi con parole separate da spazi, quindi ho utilizato [^\n].
-Ho preferito far diventare void le funzioni di ricerca perche riflettendocci un attimo su ho capito che alla fine non vanno a modificare la lista nel main, ma si occupano di stampare a video solamente le informazioni che soddisfano una determinata condizione.
-Ho ridotto l'uso dei puntatori nelle funzioni di ricerca.

Ho provato a compilare il codice e funziona tutto come dovrebbe, tranne per le due funzioni di ricerca che mi danno sempre come risultato che il servizio che st andando a ricercare non esiste.

Giorgio Aveni.
