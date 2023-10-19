#include <stdio.h>
int main(){
    int i, num;
    printf("Inserisci fino a che numero vuoi sapere i pari \n");
    scanf("%d", &num);
    for ( i = 0; i <= num; i++)
    {
       if( i % 2 == 0){
        //i assume i valori pari di Sp
        int q = i * i; //q prende i valori pari e ne fa il quadrato
        printf("Il numero pari e' %d\n", i); //viene filtrata solo la fila filtata di numeri pari
        printf("Il quadrato di %d e' %d\n",i, q); //viene filtrata solo la fila filtata di numeri pari
       }
    }
return 0;
}