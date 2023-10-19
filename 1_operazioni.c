#include <stdio.h>

main() {
    int a, b;
    
    printf("Inserisci il valore di a: ");
    scanf("%d", &a);

    printf("Inserisci il valore di b: ");
    scanf("%d", &b);

    int somma = a + b;
    int differenza = a - b;
    int prodotto = a * b; 
    int div_intera = a / b;
    int modulo = a % b;

    printf("La somma di %d e %d è %d\n", a, b, somma);
    printf("La differenza di %d e %d è %d\n", a, b, differenza);
    printf("Il prodotto di %d e %d è %d\n", a, b, prodotto);
    printf("La divisione intera di %d e %d è %d\n", a, b, div_intera);
    printf("Il modulo di %d e %d è %d\n", a, b, modulo);

    printf("Il nuovo valore di a è %d\n", ++a);
    printf("Il nuovo valore di b è %d\n", --b);
    printf("Il valore di a += 5 è %d\n", a += 5);

    printf("\n\n");

    /* Una nota sull'incremento pre-fisso e post-fisso:
     * Perché?
     * a++ restituisce il valore di a e poi lo incrementa 
     * ++a incrementa il valore di a e poi lo salva
    */

    a = 1;
    b = a++;
    printf("Il valore di a è %d\n", a);
    printf("Il valore di b è %d\n", b);

    a = 1;
    b = ++a;
    printf("\nIl valore di a è %d\n", a);
    printf("Il valore di b è %d\n", b);
}