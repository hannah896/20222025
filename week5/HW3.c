#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char digit[1000];
    int length;
} BigInt;

BigInt bigint(const char* value_str)
{
    BigInt result;
    int len = strlen(value_str);
    int start = 0;

    strcpy(result.digit, value_str);

    return result;
}

BigInt add(BigInt a, BigInt b)
{
    
}

void print(BigInt a)
{
    printf("$s\n", a.digit);
}

int compare(BigInt a, BigInt b)
{
    if (a.length > b.length)
        return 1;
    else if (a.length < b.length)
        return -1;
    else
    {
        if (strcmp(a.digit, b.digit) == 0)
        {
            return 0;
        }
        else if (strcmp(a.digit, b.digit) < 0)
        {
            return -1;
        }
        else
            return 1;
    }
}

int main()
{
    char input_a[1000], input_b[1000];
    printf("첫 번째 수를 입력하세요: ");
    scanf("%s", &input_a);
    BigInt a = bigint(input_a); 
    printf("두 번째 수를 입력하세요: ");
    scanf("%s", &input_b);
    BigInt b = bigint(input_b);

    switch (compare(a,b))
    {
        case 1:
            printf("%s > %s", a.digit, b.digit);
            break;
        case -1:
            printf("%s < %s", a.digit, b.digit);
            break;
        case 0:
            printf("%s == %s", a.digit, b.digit);
            break;        
        default:
            break;
    }


}