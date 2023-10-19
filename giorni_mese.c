/*Scrivere un programma che richieda all’utente mese (in formato numerico: 1 per
gennaio, 12 per dicembre) e anno e stampi il numero di giorni di quel mese in
quell’anno.*/
#include <stdio.h>
int main(){
int mese, anno;
printf("Inserisci il mese e l'anno: \n");
scanf("%d%d",&mese, &anno);
if (mese == 1 || mese == 3 || mese == 5 || mese == 7 || mese == 8 || mese == 10 || mese == 12)
printf("I giorni del mese sono 31\n");
else if ( mese == 4 || mese == 6 || mese == 9 || mese == 11 )
printf("I giorni del mese sono 30\n");
else if(mese == 2 && anno % 4 == 0 && anno % 100 != 0 )
printf("Il mese ha 29 giorni\n");
else 
printf("Il mese ha 28 giorni\n");
return 0;
}

/*31 giorni 

1
3
5
7
8
10
12

30 giorni:
4
6
9
11

febbraio a parte*/