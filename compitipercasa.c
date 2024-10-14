#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Inserisci tre numeri: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if ((num2 - num1) == (num3 - num2)) {
        printf("I numeri sono in progressione aritmetica.\n");
    } else {
        printf("I numeri non sono in progressione aritmetica.\n");
    }

    return 0;
}