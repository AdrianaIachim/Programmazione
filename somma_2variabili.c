#include <stdio.h>
int main(){

int a,somma = 0; //a = variabile di input, b = somma dei numeri inseriti finora
printf("Inserisci il primo numero: \n");
scanf("%d",&a);
somma = somma + a;
printf("Inserisci il secondo numero: \n");
scanf("%d",&a);
somma = somma + a;
printf("Inserisci il terzo numero: \n");
scanf("%d",&a);
somma = somma + a;
printf("La somma e': %d\n", somma);
return 0;
}

//prova a farlo senza ridondanze