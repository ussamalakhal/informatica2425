/*Scrivere un programma che letto due orari in ore,
 minuti e secondi restituisce quale orario viene prima. */


 #include <stdio.h>
 int main (){
    
    int ore1, minuti1, secondi1;
    int ore2, minuti2, secondi2;

    printf(" inserisci il primo orario: ");
    scanf("%d %d %d", &ore1, &minuti1, &secondi1);

    printf(" inserisci il secondo orario: ");
    scanf("%d %d %d", &ore2, &minuti2, &secondi2);

    if (ore1 < ore2 || (ore1 == ore2 && minuti1 < minuti2) || (ore1 == ore2 && minuti1 == minuti2 && secondi1 < secondi2)) {
        printf("Il primo orario viene prima.\n");
    } else if (ore1 > ore2 || (ore1 == ore2 && minuti1 > minuti2) || (ore1 == ore2 && minuti1 == minuti2 && secondi1 > secondi2)) {
        printf("Il secondo orario viene prima.\n");
    } else {
        printf("I due orari sono uguali.\n");
    }


}

    