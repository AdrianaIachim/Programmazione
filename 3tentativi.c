#include <stdio.h>
int main(){
int pin;
int cont = 0;
do
{
    printf("Inserisci il pin: \n");
    scanf("%d", &pin);
    cont++;
} while (pin!=200 && cont <= 2);
if(cont==3){
printf("Accesso non consentito! \n");}
else
printf("Accesso consentito! \n");
return 0;
}