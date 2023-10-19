#include <stdio.h>
int main(){
    int a, b, c;
    printf("Scrivi i 3 lati del triangolo: \n");
    scanf("%d%d%d", &a, &b, &c);
    if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
    printf("Il triangolo e' rettangolo! \n");
    else 
    printf("Il triangolo non e' rettangolo! \n");
    return 0;
}