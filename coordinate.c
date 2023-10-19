/*Date in ingresso le coordinate di un punto
nel piano (X,Y), stampare in quale
quadrante o asse si trova:
◼ (+,+) ⇒ secondo quadrante
◼ (-,+) ⇒ primo quadrante
◼ (-,-) ⇒ terzo quadrante
◼ (+,-) ⇒ quarto quadrante
◼ (0,0) ⇒ origine
◼ (_,0) ⇒ asse x
◼ (0,_) ⇒ asse y*/
#include <stdio.h>
int main(){
    int X, Y;
    printf("Inserisci la coordinata X del punto:\n");
    scanf("%d", &X);
    printf("Inserisci la coordinata Y del punto:\n");
    scanf("%d", &Y);
    if(X > 0 && Y > 0){ // Secondo quadrato
        printf("Il punto e' nel secondo quadrante\n");}
    else if(X < 0 && Y > 0){
        printf("Il punto e' nel primo quadrante\n");}
    else if(X < 0 && Y < 0){
        printf("Il punto e' nel terzo quadrante\n");}
    else if(X == 0 && Y == 0){
        printf("Il punto e' nell'origine\n");}
    else if(Y == 0){
        printf("Il punto e' nell'asse X\n");}
    else if(X == 0){
        printf("Il punto e' nell'asse Y\n");}
return 0;
}