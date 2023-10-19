#include <stdio.h>

int main(){
 
 int a;
 printf("Inserisci la misura del lato: \n");
 scanf("%d", &a);
 int perimetro = a * 4;
 int area = a*a;
 printf("il perimentro e': %d\n", perimetro);
 printf("L'area e': %d\n", area);
 return 0;

}