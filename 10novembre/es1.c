/* verificare se in esite in a un elemento uguale alla somma di tutti gli elementi in b */

#include<stdio.h>
#include<stdlib.h>

//funzione per calcolare la somma degli elementi in un array
int somma(int a[], int dim){
  int s = 0; //var dove memorizzare la sommma
  for(int i=0; i<dim; i++){
    s+=a[i];
  }
  return s;
}

//funzione per verificare la validità della formula 
int check(int a[], int dim_a, int b[], int dim_b){
  int i = 0; //contatore
  int trovato = 0; //var iterazione
  //somma elementi in b
  int somma_b = somma(b, dim_b);
  //controllo fino a che non trovo un elemento che soddisfi la proposizione
  //al più controllo tutti gli elementi di a
  while(i<dim_a && !trovato){
    //se trovo un elemento in a uguale alla somma degli elementi in b
    if(a[i]==somma_b){
      //aggiorno trovato
      trovato = 1;
    }
    //aggiorno il contatore
    i++;
  } 
  return trovato;
}

int main(){
  //dimensione array
  int dim_a, dim_b;
  printf("Inserire dimensione a: ");
  scanf("%d", &dim_a);
  printf("Inserire dimansione b: ");
  scanf("%d", &dim_b);

  //array dinamici 
  int *a;
  a = malloc(sizeof(int)*dim_a);
  int *b;
  b = malloc(sizeof(int)*dim_b);

  //inizializzo array a
  for(int i=0; i<dim_a; i++){
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
  }
  printf("\n");

  //inizializzo array b
  for(int i=0; i<dim_b; i++){
    printf("b[%d] = ", i);
    scanf("%d", &b[i]);
  }
  printf("\n");

  int verifica = check(a, dim_a, b, dim_b);

  if(verifica==1){
    printf("In a esiste un elemento uguale alla somma degli elementi di b\n");
  }

  if(verifica==0){
    printf("In a NON esiste un elemento uguale alla somma degli elementi di b\n");
  }

  free(a);
  free(b);

  return(0);

}