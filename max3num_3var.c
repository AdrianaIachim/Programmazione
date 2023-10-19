#include <stdio.h>
int main(){
int a, b, c;
printf("Scrivi 3 numeri interi: \n");
scanf("%d%d%d", &a, &b, &c);
if(a > b && a > c){
a = b;
printf("Il numero maggiore e' %d\n", a);}
else
b = c;
printf("Il numero maggiore e' %d\n");
return 0;
}