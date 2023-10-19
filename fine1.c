#include <stdio.h>
int main(){
int a;
fine:
printf("Inserisci un numero intero\n");
scanf("%d",&a);
if(a > 0){
    int doppio = a * 2;
    printf("Il doppio del tuo numero %d e' %d\n",a,doppio);
    goto fine;
    }
else if(a<=0)
    printf("Fine\n");
return 0;
}