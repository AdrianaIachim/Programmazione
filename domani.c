/*Scrivere un programma che riceva in ingresso la data completa di un giorno e scriva in
uscita la data completa del giorno successivo.
Ad esempio:
se riceve 31 12 2023, deve scrivere 1 1 2024;
se riceve 31 3 2023, deve scrivere 1 4 2023;
se riceve 28 2 2024, deve scrivere 29 2 2024;
se riceve 28 2 2023, deve scrivere 1 3 2023;
se riceve 12 10 2023, deve scrivere 13 10 2023;*/
#include <stdio.h>
int main (){
int giorno, mese, anno;
printf("Scrivi una data (g m a): \n");
scanf("%d%d%d", &giorno, &mese, &anno);
//controllo giorno 
if(giorno >= 1 && giorno <= 29 && mese != 2)
{
    printf("Il giorno successivo e': %d %d %d \n ", giorno + 1, mese, anno);
}
else if(anno % 4 == 0 && anno % 100 != 0 && giorno == 29 && mese == 2)
{
    printf("Il giorno successivo e': 01 %d %d \n ", mese + 1, anno);
}
else if(anno % 4 != 0 && anno % 100 == 0)
{
    printf("Il giorno successivo e': 01 %d %d \n ", mese + 1, anno);
}
else if (mese == 1 || mese == 3 || mese == 5 || mese == 7 || mese == 8 || mese == 10)
{
    printf("Il giorno successivo e': 01 %d %d \n ", mese + 1, anno);
}
else if ( mese == 4 || mese == 6 || mese == 9 || mese == 11 && giorno == 30)
{
    printf("Il giorno successivo e': 01 %d %d \n ", mese + 1, anno);
}
else if ( mese == 12 && giorno == 31)
{
    printf("Il giorno successivo e': 1 1 %d \n ", anno + 1);
}
else if (mese == 2 && giorno == 29) 
{
    printf("Il giorno successivo e': 01 %d %d \n ", mese + 1, anno);
}
return 0;
}