NOT solved yet
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= 2 * n - 1; i++)
    {
        for(int j = 1; j <= 2 * n - 1; j++)
        {
            if((j >= n - i && n + i - 1 && i <= n) || (j <= i - n && j <= n + i - (2 * (i - n) + 1) && i > n))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}



//          14
//       23 24 25 
//    32 33 34 35 36
// 41 42 43 44 45 46 47
//    52 53 54 55 56
//       63 64 65
//          74

// j > i && j <

// 11 12 13 14 15 16 17 
// 21 22 23 24 25 26 27 
// 31 32 33 34 35 36 37 
// 41 42 43 44 45 46 47 
// 51 52 53 54 55 56 57 
// 61 62 63 64 65 66 67 
// 71 72 73 74 75 76 77 



