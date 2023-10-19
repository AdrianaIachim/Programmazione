
#include <stdio.h>

int main() {
    // Variabili
    int dividendo, divisore;

    printf("Inserisci un numero: ");
    scanf("%d", &dividendo);

    printf("Per cosa vuoi dividere? ");
    scanf("%d", &divisore);

    int soluzioneIntera = dividendo / divisore;
    int soluzioneResto = dividendo % divisore;

    printf("La soluzione è: %d, %d\n", soluzioneIntera, soluzioneResto);

    return 0;
}
