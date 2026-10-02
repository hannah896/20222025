#include <stdio.h>


void Swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void SelectSort(int *a, int size)
{
    for(int i = 0; i< size; i++)
    {
        for(int j = i + 1; j <= size; j++)
        {
            if (a[i]> a[j]){
                Swap(&a[i], &a[j]);
            }
        }
    }
}

int binary_search(const int *a, int size, int key)
{
    for(int i = 0; i< size; i++)
    {
        if (a[i] == key)
            return i;
    }
    return -1;
}


int main(void){
    int score[5];
    int find;
    printf("서로 다른 점수 5개: ");
    scanf("%d %d %d %d %d", &score[0], &score[1], &score[2], &score[3], &score[4]);

    printf("찾을 점수: ");
    scanf("%d", &find);

    SelectSort(score, 5);
    int findScore = binary_search(score, 5, find);

    // 1번 출력
    printf("\n%d %d %d %d %d", score[0], score[1], score[2], score[3], score[4]);

    // 2번 출력
    printf("%d", findScore);
    return 0;
}
