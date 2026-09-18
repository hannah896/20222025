//01.사각형의 둘레와 면적
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double w;
    double h;
    double area;
    double parameter;

    scanf("%lf", &w);
    scanf("%lf", &h);
    area = w * h; 
    parameter = 2*(w+h);
    
    printf("사각형의 넓이: %lf\n", area);
    printf("사각형의 둘레: %lf\n", parameter);
    return 0;
}
