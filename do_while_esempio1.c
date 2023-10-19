#include <stdio.h>
int main(){
int pin;
do
{
    printf("Inserisci il pin: \n");
    scanf("%d", &pin);
} while (pin!=200);
printf("Accesso consentito!\n");
return 0;
}