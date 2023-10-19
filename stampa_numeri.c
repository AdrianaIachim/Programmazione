/*Si scriva un programma che stampi la somma dei primi n numeri naturali, dove n è un
numero richiesto all’utente.*/
#include <stdio.h>
int main(){
int numero;
int somma = 0;
printf("Inserisci un numero: \n");
scanf("%d", &numero);
for(int i = 0; i < numero; i++){
    somma = somma + i;
    printf("%d", somma);
}
printf("\n");
//break;

}