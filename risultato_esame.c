/*Letto da tastiera il risultato di un esame, stampare la corrispondente
valutazione secondo la seguente tabella:
◼ 18 - 20 ⇒ sufficiente
◼ 21 - 23 ⇒ discreto
◼ 24 - 26 ⇒ buono
◼ 27 - 29 ⇒ distinto
◼ 30 - 32 ⇒ ottimo*/
#include <stdio.h>
int main(){
int risultato;
printf("Inserisci il risultato dell'esame:\n");
scanf("%d",&risultato);
if (risultato>=18 && risultato<=20) 
{
    printf("La valutazione e' sufficiente\n");
} 
else if(risultato >= 21 && risultato <= 23)
{
    printf("La valutazione e' discreta\n");
}
else if(risultato >= 24 && risultato <= 26)
{
    printf("La valutazione e' buona\n");
}
else if(risultato >= 27 && risultato <= 29)
{
    printf("La valutazione e' distinta\n");         
}
else if(risultato >= 30 && risultato <= 32)
{
printf("La valutazione e' otima!\n");
}
else 
printf("Il ritultato inserito non e' valido!!!\n");
return 0;
}