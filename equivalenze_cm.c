/*Scrivere un programma che:
1. Chiede un numero intero in input all’utente, corrispondente ai chilometri
da convertire
2. Calcola a quanti millimetri corrisponde e salva il risultato in una variabile
3. Calcola a quanti centimetri corrisponde e salva il risultato in una variabile
4. Calcola a quanti decimetri corrisponde e salva il risultato in una variabile
5. Calcola a quanti metri corrisponde e salva il risultato in una variabile
6. Stampa il risultato in un elenco puntato (con il simbolo - ) indentato a
destra*/

#include <stdio.h>

int main(){

int km;
printf("Scrivi il numero di km da convertire: \n");
scanf("%d", &km);
int millimetri = km * 1000000;
int centimetri = km * 100000;
int decimetri = km * 10000;
int metri = km * 1000;
printf("- %d\n- %d\n- %d\n- %d\n",millimetri,centimetri,decimetri,metri);
return 0;
}