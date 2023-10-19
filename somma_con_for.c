#include <stdio.h>
int main(){
int num;
int somma = 0;
printf("Inserisci un numero: \n");
scanf("%d",&num);
for (int i = 1; i <= num; i++)
{
somma = somma + i; //la somma di tutti i numeri prima di n
}
printf("La somma e': %d\n",somma);
return 0;
}