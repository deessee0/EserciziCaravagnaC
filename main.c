#include<stdio.h>

void scambia(int* a, int* b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int min(int* a, int *b) 
{
    int min;

    if(*a<=*b)
    {
        min = *a;
    }   else   {
        min = *b;
    }
  
    return min;
}

void ordine_crescente(int* a, int* b, int* c, int* d)
{
    int tmp;

    tmp = min(a,b);
    printf("\nla var tmp: %d\n", tmp);
    scambia(&tmp, b);

    tmp = min(b, c);
    printf("\nla var tmp: %d\n", tmp);
    scambia(&tmp, c);

    tmp = min(c, d);
    printf("\nla var tmp: %d\n", tmp);
    scambia(&tmp, d);
    
}

int main(void) 
{
    int risultato, a, b, c, d;

    printf("Inserisci il primo numero: ");
    scanf("%d", &a);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &b);

    printf("Inserisci il terzo numero: ");
    scanf("%d", &c);

    printf("Inserisci il quarto numero: ");
    scanf("%d", &d);

    ordine_crescente(&a, &b, &c, &d);
    printf("-----------------------------------");
    printf("\nPrimo: %d\nSecondo: %d\nTerzo: %d\nQuarto: %d",a,b,c,d);

    return 0;

}