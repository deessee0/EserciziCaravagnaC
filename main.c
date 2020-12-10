#include<stdio.h>

void somma_armonica(int n, double* h)
{
    int i=0;

    if(i<n)
    {
        *h += (1/n);
        somma_armonica(n+1,h);
        i++;
    }
    
}

int main(void) 
{
    int n;
    double risultato;

    printf("Inserisci n: ");
    scanf("%d", &n);

    somma_armonica(n, &risultato);



    return 0;

}