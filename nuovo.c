#include <stdio.h>
int main(){
int a, b;
printf("Inserisci i numeri da dividere: \n");
scanf("%d %d", &a, &b)
if( b != 0 )
{
    int risultato = a/b;
    printf("Il risultato della divisione e': %d", risultato );
}
if else(a % b == 0)
printf("Il risultato e': %d,%d", risultato, a%b);

}