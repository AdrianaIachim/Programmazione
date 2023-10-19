#include <stdio.h>
//scrivere se un anno è bisestile o no
int main(){
//provo a dividerlo per quattro ma non lo deve essere per 100
int anno;
printf("Scrivi un anno: \n");
scanf("%d", &anno);
if(anno % 4 == 0 && anno % 100 != 0)
printf("L'anno %d e' bisestile!", anno);
else 
printf("L'anno non e' bisestile!");
return 0;
}