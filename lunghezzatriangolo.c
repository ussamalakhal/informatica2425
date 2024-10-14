#include <stdio.h>

int main() {
    int lato1, lato2, lato3;
    printf("Inserisci le lunghezze di tre lati: ");
    scanf("%d %d %d", &lato1, &lato2, &lato3);

    if ((lato1 + lato2 > lato3) && (lato1 + lato3 > lato2) && (lato2 + lato3 > lato1)) {
        printf("I lati possono formare un triangolo.\n");
    } else {
        printf("I lati non possono formare un triangolo.\n");
    }


}