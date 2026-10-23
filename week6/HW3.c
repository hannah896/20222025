#include <stdio.h>
#include <stdlib.h>

typedef void (*IntToVoid)(int);
typedef int (*IntToInt)(int);

// 재귀를 사용한 forEach 
void forEach(const int *arr, int n, IntToVoid f)
{
    if (n <= 0) return;
    
    f(arr[0]);
    forEach(arr + 1, n - 1, f);
}

// 재귀를 사용한 map 
void map(const int *a, int n, int *out, IntToInt f)
{
    if (n <= 0) return;
    
    out[0] = f(a[0]);
    map(a + 1, n - 1, out + 1, f);
}

int square(int x) { 
    return x * x; 
}

void printItemNewline(int x)
{
    printf("%d\n", x);
} 

int main(void)
{
    int a[999];
    int out[999];

    for (int i = 0; i < 999; i++){
        a[i] = i + 1;
    }

    // 1. 각 배열의 원소를 제곱한 새로운 배열을 만듦 (map 활용)[cite: 2]
    map(a, 999, out, square); 
    
    // 2. (1)의 결과를 한 줄에 하나씩 모두 출력 (forEach 활용)[cite: 2]
    forEach(out, 999, printItemNewline); 

    return 0;
}