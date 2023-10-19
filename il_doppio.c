/*Scrivere un programma che richieda all’utente numeri interi. Per ogni numero intero
inserito, scriva il doppio. Il programma deve fermarsi quando l’utente scrive un numero
negativo.*/
#include <stdio.h>
int main(){
int n;
do
{
    printf("Inserisci un numero del quale vuoi sapere il doppio: \n");
    scanf("%d", &n);
    printf("Il doppio di %d e' %d\n",n, n*2 );
}
while (n>0);
{
printf("Il numero inserito e' negativo! \n");
}
return 0;
}