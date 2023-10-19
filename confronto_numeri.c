#include <stdio.h>
int main(){
int a, b;
printf("Scrivi due numeri interi: \n");
scanf("%d%d", &a, &b);
if(a > b)
printf("Il numero maggiore e' %d\n", a);
else 
printf("Il numero maggiore e' %d", b);
return 0;
}