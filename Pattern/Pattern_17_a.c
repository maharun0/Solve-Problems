#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    // first half
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
            printf(" ");

        for (int j = 1, k = i; j <= 2 * i - 1; j++)
        {
            if (j <= (2 * i - 1) / 2)
            {
                printf("%d", k);
                k--;
            }
            if (j > (2 * i - 1) / 2)
            {
                printf("%d", k);
                k++;
            }
        }
        printf("\n");
    }
    // second half
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
            printf(" ");

        for (int j = 1, k = n - i; j <= 2 * (n - i) - 1; j++)
        {
            if (j <= (2 * i - 1) / 2)
            {
                printf("%d", k);
                k--;
            }
            if (j > (2 * i - 1) / 2)
            {
                printf("%d", k);
                k++;
            }
        }
        printf("\n");
    }
    return 0;
}
