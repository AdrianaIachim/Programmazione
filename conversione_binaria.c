/*Scrivere un programma che:
1. Chiede un numero intero compreso tra 0 e 255 in input all’utente
2. Lo converte in un numero binario a 8 bit usando il metodo delle divisioni
successive e stampa il risultato
3. Controlla se il numero ottenuto è uguale a quello inserito dall’utente
usando il metodo delle moltiplicazioni successive e stampa il risultato*/

#include <stdio.h>
int main(){
int numero;
printf("Inserisci un numero da convertire in binario: \n"); //stampo la richiesta di inserimento del numero
scanf("%d", &numero);	//leggo l'input dell utente nel variabile numero
int bit7 = numero / 128;
int bit6 = (numero % 128) / 64;     
int bit5 = (numero % 64) / 32;
int bit4 = (numero % 32) / 16;
int bit3 = (numero % 16) / 8;
int bit2 = (numero % 8) / 4;
int bit1 = (numero % 4) / 2;
int bit0 = numero % 2;
printf("Rappresentazione binaria a 8 bit: %d%d%d%d%d%d%d%d\n", bit7, bit6, bit5, bit4, bit3, bit2, bit1, bit0);
int prova = bit7;
printf("prova: %d", prova);
return 0;
}
