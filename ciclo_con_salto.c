#include <stdio.h>
int main(){
int a;
printf("Quanti asterischi vuoi inserire? \n");
scanf("%d", &a);
int asterisco = 1;
scrivi:
printf("Stefy \n");
asterisco++;
if(asterisco <= a)
goto scrivi;
printf("\n");
return 0;
}