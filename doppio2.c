/*Scrivere un programma che richieda all’utente numeri interi. Per ogni numero intero
inserito, scriva il doppio. Il programma deve fermarsi quando l’utente scrive un numero
negativo.*/

#include <stdio.h>
int main(){
int num;
scrivi:
printf("Inserisci un numero del quale vuoi sapere il doppio: \n");
scanf("%d", &num);
if (num>0)
printf("Il doppio di %d e' %d \n", num, num*2);
if (num>0)
goto scrivi;
return 0;
}