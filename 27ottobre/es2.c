#include<stdio.h>

void scambia(int v[], int dim, int i, int j){

    if(dim > 0)
    {
        if((i > 0) && (i <= dim-1) && (j > 0) && (j <= dim-1))
        {
            int tmp = v[i];
            v[i] = v[j];
            v[j] = tmp;
        }
    }

}

int minimo(int a[], int dim){

    int i, min = 9999;
    int indice;

    while(i < dim)
    {
        if(a[i] < min)
        {

            indice = i;

        }
    
        i++;
    }
    
    return indice;
}


int main(void) {
    int dim, indice;
    int i = 0;

    printf("inserire dimensione array: "); 
    scanf("%d", &dim);
    int a[dim];

    //inizializzo array a
    for(int i=0; i<dim; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    
    indice = minimo(a, dim);

    

    
    return 0;

}