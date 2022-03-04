#include <stdio.h>

int factorial(int n);

int main()
{
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        for(int j = 1; j <= 2 * (n - i - 1); j++)
            printf(" ");
        
        for(int j = 0; j <= i; j++)
        {
            int iCj = factorial(i) / (factorial(j) * factorial(i - j));
            printf("%d   ", iCj);
        }
        printf("\n");
    }

    return 0;
}
int factorial(int n)
{
    int fact = 1;
    for(int i = 1; i <= n; i++)
        fact = fact * i;
    return fact;
}
