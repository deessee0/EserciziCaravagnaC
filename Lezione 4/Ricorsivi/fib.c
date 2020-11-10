#include <stdio.h>

int fib_rec(int n)
{
  if(n == 1) return(1);
  if(n == 2) return(2);
  
  return(
    fib_rec(n-1) + fib_rec(n-2)
  );
}

int main() {
    int i, n, t1 = 1, t2 = 1, nextTerm;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");

    for (i = 1; i <= n; i++) {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    printf("\nrec %d", fib_rec(n));

    return 0;
}