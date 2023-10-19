/*Scrivere un programma che richieda all’utente un intero e scriva
compreso se il numero è compreso fra 2 e 5;
non compreso altrimenti.*/
#include <stdio.h>
int main() {
int a;
printf("Inserisci un valore: \n");
scanf("%d", &a);
if(a <= 5 && a >= 2)
printf("Il numero e' compreso tra 2 e 5\n");
else
printf("Il numero non e' compreso tra 2 e 5\n");
return 0;
}
