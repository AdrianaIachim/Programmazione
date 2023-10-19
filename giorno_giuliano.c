/*Scrivere un programma che richieda all’utente giorno, mese e anno di una data
qualsiasi e ne calcoli e stampi il giorno giuliano.
In particolare, il programma deve
definire le variabili G, M e A per giorno, mese e anno, la variabile JD per il giorno
giuliano, e le variabili N0, N1, N2 e N3 per i valori intermedi;
richiedere all’utente i valori di G, M e A;
calcolare JD con una sequenza di assegnamenti corrispondenti alle equazioni della
diapositiva 1.*/

#include <stdio.h>

int main(){
    int g, m , a, jd, n0, n1, n2, n3; //dichiarazione delle varibili
    printf("Scrivi il giorno della tua data di nascita: \n" );
    scanf("%d", &g);
    printf("Scrivi il mese della tua data di nascita: \n");
    scanf("%d", &m);
    printf("Scrivi l'anno della tua data di nascita: \n");
    scanf("%d",&a);
    //assegnamento alle variabili
    n0 = (m-14)/12;
    n1 = (1461*(a + 4800 + n0))/4;
    n2 = (367*(m - 2 - 12 * n0))/12;
    n3 = (3*(a + 4900 + n0))/400;
    jd = n1 + n2 - n3 + g - 32075;
    printf("Il tuo numero giuliano e': %d", jd);

}