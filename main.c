#include<stdio.h>

void somma_armonica(int n, double* h)
{
    if(n == 1)
    {
        *h = *h + 1;
    } else {
        *h = *h + (1/n);
        somma_armonica(n-1, h);
        
    }
           
}

int main(void) 
{
    int n;
    double risultato = 1;

    printf("Inserisci n: ");
    scanf("%d", &n);

    somma_armonica(n, &risultato);
    printf("Risultato = %lf", risultato);


    return 0;

}