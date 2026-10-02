#include <stdio.h>

int main(void) {
    int i;

    // C 코드의 첫 번째 줄을 출력
    printf("#include <stdio.h>\n");

    // 빈 줄 출력
    printf("\n");

    // main 함수의 시작 부분을 출력
    printf("int main(void) {\n");

    // 변수 선언 부분을 출력
    printf("    int var;\n");

    // scanf 문장을 출력
    // %%d를 사용해야 출력 결과에 %d가 그대로 나타남
    printf("    scanf(\"%%d\", &var);\n");

    // 0부터 512까지 반복
    for (i = 0; i <= 512; i++) {

        // 첫 번째 줄은 if로 출력
        if (i == 0)
            printf("    if (var == 0) printf(\"0 is even\");\n");

        // 나머지는 else if 형태로 출력
        else
            printf("    else if (var == %d) printf(\"%d is %s\");\n",
                   i,                         // 현재 숫자
                   i,                         // 출력할 숫자
                   i % 2 == 0 ? "even" : "odd"); // 짝수/홀수 판별
    }

    // main 함수의 닫는 중괄호 출력
    printf("}\n");

    return 0;
}
