#include <stdio.h>
#include <math.h>

float pointDistance(float x1, float y1, float x2, float y2);

int main(void) {

  float x1, y1, x2, y2;
  float risultato;

  printf("Inserisci l'ascissa della prima coordinata: ");
  scanf("%f", &x1);

	printf("Inserisci l'ordinata della prima coordinata: ");
  scanf("%f", &y1);
  

  printf("\nInserisci l'ascissa della seconda coordinata: ");
  scanf("%f", &x2);

	printf("Inserisci l'ordinata della seconda coordinata: ");
  scanf("%f", &y2);


  risultato = pointDistance(x1, y1, x2, y2);
  printf( "Risultato: %f\n", risultato ); 

  return 0;
}

float pointDistance(float x1, float y1, float x2, float y2){

float deltaX, deltaY;

deltaX = x2 - x1;
deltaY = y2 - y1;

return sqrt(pow(deltaX,2) + (pow(deltaY,2)));
}  