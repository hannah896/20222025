
#include <stdio.h>

int main(void)
{
    FILE *fp;
    FILE *out;
    int c, next;
    int count;

    fp = fopen("test.txt", "r");

    if (fp == NULL)
    {
        printf("test.txt 파일이 존재하지 않습니다.\n");
        return 1;
    }

    out = fopen("result-rle.txt", "w");

    if (out == NULL)
    {
        printf("result-rle.txt 파일을 생성할 수 없습니다.\n");
        fclose(fp);
        return 1;
    }

    c = fgetc(fp);

    while (c != EOF)
    {
        count = 1;

        while ((next = fgetc(fp)) == c)
        {
            count++;
        }

        fprintf(out, "%d%c", count, c);

        c = next;
    }

    fclose(fp);
    fclose(out);

    printf("RLE 압축이 완료되었습니다.\n");

    return 0;
}
