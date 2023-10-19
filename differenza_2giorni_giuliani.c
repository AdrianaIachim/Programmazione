/*Scrivere un programma che richieda all’utente due date e ne calcoli la differenza. In
particolare, il programma deve:
Definire variabili per giorno, mese e anno delle due date;
Calcolare i giorni giuliani delle due date;
Stampare la differenza fra i giorni giuliani.
Un modo per verificare la correttezza del programma è calcolare manualmente la
differenza usando la soluzione dell’esercizio alla diapositiva 2 per calcolare i giorni
giuliani delle due date.
Usare il debugger per individuare e correggere comportamenti inattesi.
Infine, stampare a video la propria età in giorni.*/

#include <stdio.h>
int main(){
    int g, m , a, jd, n0, n1, n2, n3; //dichiarazione delle varibili
    int g1, m1, a1, jd1, n11, n22, n33, n00;
    printf("Scrivi il giorno, il mese e l'anno di cui vuoi calcolare il numero giuliano: \n" );
    scanf("%d%d%d", &g, &m, &a);
    printf("Inserisci la seconda data: \n" );
    scanf("%d%d%d", &g1, &m1, &a1);
    //assegnamento alle variabili
    n0 = (m-14)/12;
    n1 = (1461*(a + 4800 + n0))/4;
    n2 = (367*(m - 2 - 12 * n0))/12;
    n3 = (3*(a + 4900 + n0))/400;
    jd = n1 + n2 - n3 + g - 32075;
    //assegnamento variabili seconda data
    n00 = (m1-14)/12;
    n11 = (1461*(a1 + 4800 + n0))/4;
    n22 = (367*(m1 - 2 - 12 * n0))/12;
    n33 = (3*(a1 + 4900 + n0))/400;
    jd1 = n1 + n2 - n3 + g1 - 32075;
    printf("la differenza delle due date e': %d", (jd-jd1));

}