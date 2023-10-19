/*Scrivere un programma che richieda all’utente un numero intero e lo stampi da destra
a sinistra (ad esempio, se l’utente scrive 251017 il programma deve scrivere 710152). con il ciclo while*/
#include <stdio.h>
int main(){
int n;
printf("Inserisci un numero e ti scrivero' l'inverso \n");
scanf("%d", &n);
while (n > 0 )
{
printf("%d", n%10);
n = n / 10; //resto quindi l'ultima cifra
}
printf("\n\n");
}