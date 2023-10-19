/*Data una scacchiera 8X8, prendere in ingresso una posizione (es: 1 3 corrisponde a prima
riga terza colonna) e dire se è una casella bianca o nera.
Verificare anche che la posizione inserita sia valida (es: 9 1 non è valida perché la
scacchiera è 8X8).*/
#include <stdio.h>
int main(){
int x, y;
printf("Inserire le coordinate della casella da verificare\n");
scanf("%d%d",&x,&y);
if(y,x>0 && y,x<=8)
    if(x % 2 != 0 && y % 2 != 0 || (x / y == 1))
    printf("La casella e' bianca!\n");
else if(y % 2 == 0 && x % 2 != 0 || (x % 2 == 0 && y % 2 != 0))
printf("La casella e' nera!\n");
else 
printf("Le coordinate inserite non esistono!\n");
return 0;
}