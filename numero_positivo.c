/*Scrivere un programma che richieda all’utente un numero intero e stampi il messaggio
“Positivo” se il numero è maggiore di 0.*/

#include <stdio.h>

int main(){
int numero;
printf("Inserisci un numero intero: "); 
scanf("%d", &numero);
if(numero > 0){
    printf("Positivo");
}
else
printf("Negativo");
return 0;
}