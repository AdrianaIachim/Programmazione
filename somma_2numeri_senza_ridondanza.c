#include <stdio.h>
int main(){

int a,somma, i, cont = 0; //a = variabile di input, b = somma dei numeri inseriti finora

printf("quanti numeri vuoi inserire? \n");
scanf("%d",&cont);
if(cont>i){
printf("Inserisci un numero: \n"); 
scanf("%d",&a);
somma = somma + a;
i++;
}

else 
printf("La somma e': %d\n", somma);
return 0;

}