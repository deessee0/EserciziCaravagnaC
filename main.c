#include<stdio.h>
#include <stdlib.h>

int delta_minimo(int a[], int n, int dim)
{
    
    for(int i = 0; i<dim; i++)
    {
        if(abs(a[i]) )
    }
    
    
    
    return 0;
}

void stampa_vettore(int a[], int dim)
{

    for(int i=0; i<dim; i++)
    {
        printf("a[%d] = ", i);
        printf("%d\n", a[i]);
    }
}

int main(void) {
    int dim;
    int i = 0;
    int n, risultato;

    printf("Inserire dimensione array: "); 
    scanf("%d", &dim);
    int a[dim];

    //inizializzo array a
    for(int i=0; i<dim; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    
    printf("\n");

    printf("Inserisci il numero che vuoi ricercare nell'array: ");
    scanf("%d", &n);

    printf("----------------------------\nVettore inserito:\n");
    stampa_vettore(a, dim);
    printf("----------------------------\nIntero in valore assoluto più vicino a quello fornito: ");
    risultato = delta_minimo(a, n, dim);
    printf("%d", risultato);

    return 0;

}