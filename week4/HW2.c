#include <stdio.h>

void toupper(char *str)
{
    for(int i = 0; i< sizeof(str) ; i++)
    {
        char c = str[i];

        // 소문자 라면 
        if (c > 96 && c < 123){
            c -= 32;
        }
    }
}
int main(void)
{
    char str[80];
    int digits = 0;
    int words = 0;

    fgets(str, sizeof(str), stdin);
    
    toupper(str);
    printf("%s", str);

    for(int i = 0; i< sizeof(str) ; i++)
    {
        char c = str[i];
        if (c == 32 && str[i+1]!= 32)
        {
            
        }
        if (c >47 && c<57)
            digits++;
    }

    printf("digits = %d , words = %d", digits, words);
    return 0;
}