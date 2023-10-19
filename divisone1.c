/*1. Scrivere un programma che calcoli la divisione tra due numeri interi a e b
presi in input dall’utente.
2. Controllare che b sia diverso da 0.
3. Stampare il risultato a video.
4. Aggiungere un pezzo di codice che, dopo aver controllato che b sia
diverso da 0, controlla se i due numeri sono anche divisibili (un numero a
è divisibile per un numero b se a/b ha resto 0). Se lo sono stampa il
risultato, se non lo sono stampa anche il resto.*/
#include <stdio.h>
int main(){
int a, b;
printf("Inserisci i numeri da dividere: \n");
scanf("%d %d", &a, &b);
if(b!= 0 && a%b == 0)
{
    int risultato = a/b;
    printf("Il risultato e': %d\n", risultato);
}
else if (a%b != 1)
    {
    printf("Il risultato della divisione e': %d,%d\n",a/b, a%b );
    }
return 0;
}