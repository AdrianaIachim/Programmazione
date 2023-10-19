/*Scrivere un programma che richieda all’utente un numero intero e stampi il messaggio
“Dispari” se il numero è dispari.*/

#include <stdio.h>
int main() {
int numero;
printf("Scrivi un numero intero: \n");
scanf("%d", &numero);
if(numero % 2 !=0){
printf("Il numero %d e' dispari\n", numero);
}
else 
printf("Il numero inserito e' pari\n");
return 0;

}