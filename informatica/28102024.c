/* Creare una sorta di menù( vedi esempio) tramite dei printf per la scelta dell'operazione da compiere tra due valori generati casualmente( eseguendo lì dove c'è bisogno gli opportuni controlli). Comunicare il risultato dell'operazione o la scelta dell'utente di non fare niente e uscire dal programma:ES: "Seleziona l'operazione da eseguire: 
        0.  TERMINA
        1.  SOMMA
        2.  DIFFERENZA
        3.  MOLTIPLICAZIONE
        4.  DIVISIONE  " */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    float num1;
    float num2;
    int scelta;
    srand(time(NULL));

    printf("-- scegli dal menu l'operazione da fare--");
    printf("\n 0. termina");
    printf("\n 1. somma");
    printf("\n 2. differenza");
    printf("\n 3. moltiplicazione");
    printf("\n 4. divisione");

    printf("\n scegli l'operazione da compiere: ");
    scanf("%d", &scelta); 

    num1=rand()%50+1;
    num2=rand()%50+1;  
    printf("%.2f %.2f", num1, num2);

    switch(scelta){
        case 0:
            printf("il programma termina");
            break;
        case 1:
            printf("la somma vale: %.2f", num1+num2);
            break;
        case 2:
            printf("la differenza vale: %.2f", num1-num2);
            break;
        case 3:
            printf("la moltiplicazione vale: %.2f", num1*num2);
            break;
        case 4:
            printf("la divisione vale: %.2f", num1/num2);
            break;
        default:
            printf("hai inserito una scelta non valida");
            break;
    }
        

}


