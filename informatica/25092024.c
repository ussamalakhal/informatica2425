/* esercizio 
	calcola il perimetro di un rettangolo
	dati i valori della base e dell'altezza
*/
#include <stdio.h>

int main (){
	float base, altezza, perimetro;	
	base=0; 
	altezza=0; 
	perimetro=0;

	printf("inserisci la base: ");
	scanf("%f", &base);
	printf("inserisci altezza: ");
	scanf("%f",&altezza);
	perimetro= (base+altezza)*2;
	printf("il perimetro vale: %f", perimetro);
	
}