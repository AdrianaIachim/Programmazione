/*Scrivere un programma che stampi, con la convenzione sopra indicata, il giorno della
settimana di una data richiesta all’utente (ad esempio, se la data cade di mercoledì, il
programma deve stampare 2).
Il programma deve semplicemente calcolare il giorno giuliano della data e stampare il
resto della divisione intera fra il giorno giuliano e 7.
Stampare il giorno della settimana della propria data di nascita.*/


#include <stdio.h>

int main(){
    int g, m , a, jd, n0, n1, n2, n3, jd_resto; //dichiarazione delle varibili
    printf("Scrivi il giorno, il mese e l'anno di cui vuoi calcolare il numero giuliano: \n" );
    scanf("%d%d%d", &g, &m, &a);
    //assegnamento alle variabili
    n0 = (m-14)/12;
    n1 = (1461*(a + 4800 + n0))/4;
    n2 = (367*(m - 2 - 12 * n0))/12;
    n3 = (3*(a + 4900 + n0))/400;
    jd = n1 + n2 - n3 + g - 32075;
    jd_resto = jd % 7;
    if (jd_resto == 0){
    printf("La data corrisponde al lunedi' \n");}
    if (jd_resto == 1){
    printf("La data corrisponde al martedi' \n");}
    if (jd_resto == 2){
    printf("La data corrisponde al mercoledi' \n");}
    if (jd_resto == 3){
    printf("La data corrisponde al giovedi' \n");}
    if (jd_resto == 4){
    printf("La data corrisponde al venerdi' \n");}
    if (jd_resto == 5){
    printf("La data corrisponde al sabato \n");}
    if (jd_resto == 6){
    printf("La data corrisponde al domenica \n");}


}