/* DATI DUE NUMERI A e B  
VERIFICARE SE A è IL QUADRATO DI B*/


#include <stdio.h>
    int main(){
    float a=0;
    float b=0;
    float quadrato=0;

    printf("inserisci il primo valore: ");
    scanf("%f", &a);
    printf("inserisci il secondo valore: ");
    scanf("%f", &b);

    quadrato = b*b;
    printf("il doppio è: %f", quadrato);
    if(a == quadrato ){
        printf("il primo valore %f corrisponde al quadrato del secondo %f", a,b);
        
    }
    else{
        printf("il primo valore %f non corrsiponde al quadrato del secondo %f", a,b);
    }



}
