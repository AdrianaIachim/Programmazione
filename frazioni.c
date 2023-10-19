/*Leggere quattro numeri che rappresentano numeratore e denominatore di due frazioni e
dire se le due frazioni rappresentano lo stesso numero.*/
#include <stdio.h>
int main(){
int den1, den2, num1, num2;
printf("Inserisci il numeratore ed il denominatore della prima frazione: \n");
scanf("%d%d", &num1, &den1);
printf("Inserisci il numeratore ed il denominatore della seconda frazione: \n");
scanf("%d%d", &num2, &den2);
if(num1/num2 == 1 && den1 / den2 == 1 /*&& num1%num2 == 1 && den1%den2 == 1*/)
printf("Rappresentano lo stesso numero! \n");
else
printf("Non rappresentano lo stesso numero! \n");
return 0;
}