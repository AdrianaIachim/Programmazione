#include <stdio.h>
int main(){
    int a, b, c;
    printf("Inserisci i 3 lati: \n");
    scanf("%d %d %d", &a,&b,&c);
    if(a == b && b == c)
    printf("Il triangolo e' equilatero!\n");
    else if(a == b || b == c || a == c)
    {
        printf("Il triangolo e' isoscele! \n");
    }
    else if(a != b && a!= c && b != c)
    {
        printf("Il triangolo e' scaleno! \n");
    }
    return 0;
}