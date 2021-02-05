/* eliminare duplicati da un array dinamico di interi */

#include<stdio.h>
#include<stdlib.h>

//------------ SENZA ALLOCARE ALTRO VETTORE ---------//
//funzione per eliminare duplicati 
void rimuovi(int a[], int *dim){
  //ciclo su tutto l'array
  for(int i=0; i<*dim; i++){
    //ciclo sugli elementi dopo a[i]
    for(int j=i+1; j<*dim; j++){
      //se trovo un duplicato 
      if(a[i]==a[j]){
        //sposto di un posto a sx tutti gli elementi da j in poi
        for(int k=j; k<*dim-1; k++){
          a[k] = a[k+1];
        }
        //decremento dim 
        *dim -=1;
        //devo controllare ancora j 
        //perché adesso in a[j] c'è l'elemento che prima era in a[j+1]
        j--;
      }
    }
  }
}

int main(void) {
    int dim_a;
    printf("Inserire dimensione a: ");
    scanf("%d", &dim_a);
    int *a = malloc(sizeof(int)*dim_a);

    //inizializzo array a
    for(int i=0; i<dim_a; i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("\n");

    //rimuovo duplicati senza array di supporto 
    rimuovi(a, &dim_a);

}