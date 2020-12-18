#include <stdio.h>

void isPrime(int dim, int a[])
{
    int contatore = 0, prime;
    int b[dim];

    //per tutti i numeri dell'array
    for(int i=0; i<dim; i++)
    {
        for(int j=0; j<dim; j++)
        {
            //sono divisibili?
            if(a[i] % a[j] != 0)
            {
                prime = 0;                        
            } else if (i != j)  {
                contatore++;
                prime = 1;
            }
        }

        if(prime == 1)
        {
            b[i] = a[i];
        } else {
            b[i] = 0;
        }          
    }

    int clean_b[contatore], j = 0;

    for(int i = 0; i < dim; i++)
    {
        if(b[i] != 0 && j < contatore ){
            clean_b[j] = b[i];
            j++;     
            printf("Il numero %d è co-primo", b[i]);       
        }
    }
}


int main(void) {
    //var dim, tre array
    int dim; 
    printf("inserire dimensione array: "); 
    scanf("%d", &dim);
    int a[dim];

    //inizializzo array a
    for(int i=0; i<dim; i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("\n");
    printf("----------------------------\n");
    isPrime(dim,a);

  return 0;
}