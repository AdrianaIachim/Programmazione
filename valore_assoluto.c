#include <stdio.h>
int main(){
int a;
printf("Inserisci un numero del quale vuoi calcolare il numero assoluto: \n");
scanf("%d", &a);
if(a>=0)
printf("Il valore assoluto e': %d", a);
else 
printf("Il valore assoluto e': %d", -a);
return 0;
}