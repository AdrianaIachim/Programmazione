#include <stdio.h>
int main(){
int n, fattoriale;
printf("Inserisci un numero del quale vuoi sapere il fattoriale: \n");
scanf("%d", &n);
for (int i = 0; i <= n; i++)
{
    fattoriale = n * ( n - 1 );
}
printf("Il fattoriale di %d e' %d\n", n, fattoriale);
return 0;
}