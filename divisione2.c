#include <stdio.h>
int main(){
int dividendo, divisore;
int a, q;
printf("Inserisci due numeri che vuoi dividere: \n");
scanf("%d%d", &dividendo, &divisore);
//quoziente = quante sottrazioni ho fatto con il dividendo (m)
//resto = se il quoziente è minore del dividendo
a = dividendo;
q = 0;
while(a >= divisore){
a = a - divisore; //ci trovuamo il resto
q = q + 1;
}
printf("Il risultato e' %d,%d\n", q, a);
return 0;
}