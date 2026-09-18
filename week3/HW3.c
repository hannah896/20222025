//03.당구 각도 계산기
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main(void)
{
    int p1_x;
    int p1_y;
    int p2_x;
    int p2_y;

    printf("공의 좌표를 입력하세요: ");
    scanf("%d %d", &p1_x, &p1_y);
    printf("목표지점의 좌표를 입력하세요: ");
    scanf("%d %d", &p2_x, &p2_y);

    double ans = atan2(p2_y-p1_y, p2_x-p1_x);
    int ans_degree = (ans*180/M_PI);
    // 삼항연산자로 음수시에 양수화
    int a = ans_degree < 0 ? 360+ans_degree : ans_degree;
    printf("목표: %d - %d 도 사이", a-1, a);
    return 0;
}
