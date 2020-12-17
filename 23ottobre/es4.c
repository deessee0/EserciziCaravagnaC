#include <stdio.h>

int main(void) {
  //var dim, tre array
  int dim; 
  printf("inserire dimensione array: "); 
  scanf("%d", &dim);
  int a[dim];
  int b[dim];

  //inizializzo array a
  for(int i=0; i<dim; i++){
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
  }

  printf("\n");

  //inizializzo array b
  for(int i=0; i<dim; i++){
    printf("b[%d] = ", i);
    scanf("%d", &b[i]);
  }

  printf("\n");

  int c[dim];

  //sommare
  for(int i=0; i<=dim-1; i++) {
    c[i] = a[i] + b[i];
  }

  for(int i=0; i<dim; i++){
    printf("%d ", c[i]);
  }

  printf("\n");

  //moltiplicare
  for(int i=0; i<dim; i++){
    c[i] = a[i] * b[i];
    printf("%d ", c[i]);
  }

  printf("\n");

  //memorizzare maggiore
  for(int i=0; i<dim; i++){
    if(a[i]<=b[i]) {
      c[i] = b[i];
    }
    else {
      c[i] = a[i];
    }
    printf("%d ", c[i]); 
  }

  printf("\n");

  int max, min;
  float media; 

  max = c[0];
  min = c[0];
  media = c[0];

  for(int i=1; i<dim; i++) {
    //cerco il max
    if(c[i]>max){
      max = c[i];
    }
    if(c[i]<min){
      min = c[i];
    }
    //media = media + c[i]
    media += c[i];
  }

  printf("\nMax in c: %d\n", max);
  printf("\nMin in c: %d\n", min);

  media = media/dim; //media /= dim

  printf("\nMedia elementi di c: %lf\n", media);

  return 0;
}