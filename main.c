#include <stdio.h>

void cerca_somma(int dim, int a[], int b[])
{
    int somma=0;

    for(int i=0; i<dim; i++)
    {
        somma += b[i];
    }

    for(int i=0; i<dim; i++)
    {
        if(a[i] == somma)
        {
            printf("L'elemento a[%d] corrisponde alla somma degli elementi dell'array b che è: %d\n", i, somma);
        }
    }

}


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
    printf("----------------------------\n");
    cerca_somma(dim,a,b);



  return 0;
}