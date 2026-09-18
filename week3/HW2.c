//02.태양빛 도달 시간
#include <stdio.h>

int main(void)
{
    const double light_v = 300000;
    double distance_StoE = 149600000;

    printf("빛의 속도는 %lf km/s\n", light_v);
    printf("태양과 지구와의 거리는 %lf km\n", distance_StoE);
    printf("도달 시간은 %lf 초", distance_StoE/light_v);
    return 0;
}