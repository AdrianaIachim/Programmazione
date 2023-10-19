#include <stdio.h>
int main() {
int a, b, c;
printf("Inserisci 3 numeri: \n");
scanf("%d%d%d", &a, &b, &c);
if (a > b && a > c) 
printf ("Il massimo e': %d\n", a );
else if(b > a && b > c )
printf ("Il massimo e' : %d\n" , b);
else 
printf("Il piu' grande e': %d", c);
return 0;
}