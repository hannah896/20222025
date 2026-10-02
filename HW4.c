#include <stdio.h>

int main(void)
{
    for (int i = 1; i< 33; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 1; j<=i; j++)
            {
                for (int k = 1; k<=i; k++)
                    printf("*");
                printf("\n");
            }
        }
        else
        {
            for(int j = 1; j<=i; j++)
            {
                for (int k = 1; k<=i; k++)
                    if (j == 1 || k == 1 || j == i || k == i)
                        printf("*");
                    else
                        printf(" ");
                printf("\n");
            }
        }
        printf("\n");
    }
}
