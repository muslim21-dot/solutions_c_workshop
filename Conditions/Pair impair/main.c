#include <stdio.h>
#include <stdlib.h>

int main() {
    int nombre;

    printf("Entrez un nombre entier: ");
    scanf("%d", &nombre);

    if (nombre % 2 == 0) {
        printf("Le nombre %d est pair.\n", nombre);
    } else {
        printf("Le nombre %d est impair.\n", nombre);
    }

    return 0;
}
