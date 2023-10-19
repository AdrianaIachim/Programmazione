#include <stdio.h>
int main(){
int num;
int accomulatore = 1;
printf("Quanti numeri vuoi moltiplicare tra di loro? \n");
scanf("%d", &num);
printf("Inserisci i numeri: \n");
for (int i = 0; i < num; i++)
{     
    scanf("%d", &num);
    accomulatore = accomulatore *  num;
}
    printf("Il prodotto dei numeri e' %d\n", accomulatore);
return 0;
}