#include<stdio.h>
#include <stdlib.h>


struct Dati 
{
    int valore, indice;
};

struct Dati minimo(int a[], int dim)
{
    struct Dati valori_minimi = {a[0], 0};
    int i;

    for(i=0; i < dim; i++)
    {
        if ( a[i] < valori_minimi.valore ) 
        {
            valori_minimi.valore = a[i];
            valori_minimi.indice = i;
        }
    } 
    
    return valori_minimi;
}

void delta_minimo(int a[], int n, int dim)
{
    int differenza[dim];
    struct Dati risultato;


    for(int i = 0; i<dim; i++)
    {
        if(abs(a[i]) > n)
        {
            differenza[i] = abs(a[i]) - n;
            
        }   else   {

            differenza[i] = n - abs(a[i]);
        }         
    }

    risultato = minimo(differenza, dim); 
    
    printf("\nValore dell'intero in valore assoluto più vicino a quello fornito: %d", risultato.valore);

    printf("\nIndice dell'intero in valore assoluto più vicino a quello fornito: %d", risultato.indice);

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

    printf("-----------------------");
    printf("\nInserire dimensione array: "); 
    scanf("%d", &dim);
    int a[dim];

    //inizializzo array a
    for(int i=0; i<dim; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    
    printf("-----------------------\n");

    printf("Inserisci il numero che vuoi ricercare nell'array: ");
    scanf("%d", &n);

    printf("-----------------------\n");

    delta_minimo(a, n, dim);
    
    

    return 0;

}