#include <stdio.h>

float calcolaSconto(float prezzo, int sconto);

int main(void) {

  float prezzo, scontoPercentuale, risultato;

  printf("Inserisci il primo numero: ");
  scanf("%f", &prezzo);

	printf("Inserisci il secondo numero: ");
  scanf("%f", &scontoPercentuale);


  risultato = calcolaSconto(prezzo, scontoPercentuale);
  printf( "Risultato: %f\n", risultato ); 

  return 0;
}

float calcolaSconto(float prezzo, int sconto){

	float scontoEffettivo = ((sconto * prezzo)/100);


	return (prezzo - scontoEffettivo);
}

