// 13.      *
//         * *
//        *   *
//       *     *
//      *********
#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= 2 * n - 1; j++)
        {
            if(i == n || i + j == n + 1 || j - i == n - 1)
                printf("*");
            else 
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
















//https://www.youtube.com/watch?v=kJo8bV12nU0&list=PLQbJ1R07pquU_VSqSKXWsjVNcFQdWVgRc&index=12