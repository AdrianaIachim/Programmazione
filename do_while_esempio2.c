#include <stdio.h>
int main(){
int a;
int asterisco = 1;
do{
printf("Quanti asterischi vuoi inserire? \n");
scanf("%d", &a);
printf("*\n");
asterisco++;}
while(asterisco <= a);
printf("accesso negato! \n");
return 0;
}