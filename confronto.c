/*Scrivere un programma che:
1. Chiede due numeri interi a e b in input all’utente
2. Per ognuno degli operatori di confronto visti, stampa il risultato del
confronto tra a e b*/
#include <stdio.h>
int main(){
    int a, b;
    printf("Scrivi due numeri interi: \n");
    scanf("%d%d",&a, &b );
    printf("L'operazione: %d > %d e' %d: \n", a, b, a>b);
    printf("L'operazione: %d < %d e' %d: \n", a, b, a<b);
    printf("L'operazione: %d >= %d e' %d: \n", a, b, a>=b);
    printf("L'operazione: %d == %d e' %d: \n", a, b, a==b);
    printf("L'operazione: %d != %d e' %d: \n", a, b, a!=b);
    return 0;

}