#include<stdio.h>

void vettore_fattoriale(int a[], int dim)
{

    for(int i=0; i<dim; i++)
    {
        a[i] = 
    }
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
    printf("\n");
    delta_minimo(a, n, dim);
    
    

    return 0;

}