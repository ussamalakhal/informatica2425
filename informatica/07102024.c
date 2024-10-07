/* stabilire se il numero è dispari
    controllando l'ultima cifra meno significativa*/


#include <stdio.h>
int main(){
    int numero, cifra;
    printf("inserisci il numero: ");
    scanf("%d", &numero);


    cifra= numero%10; 
    if(cifra%2==0)
        printf("il numero %d è pari", numero);
    else 
        printf("il numero %d è dispari", numero);
        



}