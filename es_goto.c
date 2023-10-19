/*Scrivere un programma che:
1. Chiede un numero intero in input
all’utente.
2. Se il numero è maggiore di 0, ne calcola
il doppio e stampa a video il risultato,
poi riparte chiedendo un altro numero
intero all’utente, fino a che l’utente non
inserisce 0.
3. Se l’utente inserisce 0, il programma
stampa “Fine”

NB: usare GOTO opportunamente per
ottenere il risultato desiderato.*/
#include <stdio.h>
int main(){
int a;
fine:
printf("Inserisci un numero intero\n");
scanf("%d",&a);
if(a > 0){
    int doppio = a * 2;
    printf("Il doppio del tuo numero %d e' %d\n",a,doppio);
    goto fine;
    }
else if(a==0)
    printf("Fine\n");
return 0;
}