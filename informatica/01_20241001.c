 /*Dati 3 numeri stampare il più piccolo,
  il più grande e la loro media aritmetica.
  */


#include <stdio.h>

int main() {
    float num1, num2, num3, max, min, media;
    
    printf("Inserisci il primo numero: ");
    scanf("%f", &num1);

    printf("Inserisci il secondo numero: ");
    scanf("%f", &num2);

    printf("Inserisci il terzo numero: ");
    scanf("%f", &num3);

   
    min = num1;
    if (num2 < min) {
        min = num2;
    }
    if (num3 < min) {
        (min = num3);
    }

    
    max = num1; 
    if (num2 > max) {
        (max = num2) ;
    }
    if (num3 > max) {
        (max = num3) ;
    }


    media = (num1 + num2 + num3) / 3.0;

    
    printf("Il numero più piccolo è: %f", min);
    printf("Il numero più grande è: %f", max);
    printf("La media aritmetica è: %.2f", media);

    
}