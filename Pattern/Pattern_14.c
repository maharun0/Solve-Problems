#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= 2 * n - 1; j++)
        {
            if(i == 1 || i == j || i + j == 2 * n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
