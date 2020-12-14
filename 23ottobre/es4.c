#include<stdio.h>

int main(void) 
{
    int a[5], b[5];

    printf("-------------------------------\n");

    //inizializzo array a
    for(int i=0; i<5; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("\n");

    //inizializzo array b
    for(int i=0; i<5; i++)
    {
        printf("b[%d] = ", i);
        scanf("%d", &b[i]);
    }

    printf("-------------------------------\n");

    int c[5];
    int *p;

    for(int i=0; i<5; i++)
    {
        

    }


    return 0;

}