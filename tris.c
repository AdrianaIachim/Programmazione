/*Data una configurazione del gioco del tris,
determinare se è vincente. La configurazione
consiste in tre numeri interi inseriti dall’utente con
coordinate (x1,y1), (x2,y2) e (x3,y3), corrispondenti
alla posizione in griglia del proprio simbolo.
NB: la risoluzione del problema non consiste
nell’elencare esplicitamente tutte le combinazioni,
ma nel cercare di trovare una formula generale.
Esempio: (1,1), (1,2), (1,3) è vincente perché i tre
elementi sono allineati sulla riga, cioè la x è uguale
per tutti.*/
#include <stdio.h>
int main() {
    int x1, y1, x2, y2, x3, y3;
    printf("Inserisci i valori della prima coordinata:\n");
    scanf("%d%d", &x1, &y1);
    printf("Inserisci i valori della seconda coordinata:\n");
    scanf("%d%d", &x2, &y2);
    printf("Inserisci i valori della terza coordinata:\n");
    scanf("%d%d",&x3,&y3);
    if(x1==x2 && x2 == x3)
        printf("Hai vinto!\n");
    else if(x1 + y1 == 4 && x2 + y2 == 4 && x3 + y3 == 4)
        printf("Hai vinto!\n");
    else if(y1==y2 && y2==y3)
        printf("Hai vinto!\n");
    else
    printf("Non hai vinto!\n");
    return 0;
}

