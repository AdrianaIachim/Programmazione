/*Scrivere un programma che:
1. Chiede un numero intero a in input all’utente
2. Salva il valore originale in una variabile di supporto
3. Applica l’incremento pre-fisso nella stampa (⇒ nella printf) del valore
di a
4. Ripristina il valore di a
5. Applica l’incremento post-fisso nella stampa (⇒ nella printf) del valore
di a
Ripetere i punti 3 – 5 con il decremento.
Verificare il cambiamento del valore di a ad ogni step con il debugger.*/
#include <stdio.h>

int main(){
int a, supporto;
printf("Scrivi un numero intero: \n");
scanf("%d",&a);
supporto = a;
printf("Il valore pre-fisso del numero interito e' %d\n", ++supporto);
printf("Il valore post-fisso del numero inserito e' %d\n", supporto++);
supporto = a;
printf("L'incremento post-fisso del valore inserito e' %d\n",supporto++);
printf("L'incremento pre-fisso del valore inserito e' %d\n",--supporto);
a = supporto;
printf("L'incremento pre-fisso del valore inserito e' %d\n",a--);
return 0;

}