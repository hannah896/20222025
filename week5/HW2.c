#include <stdio.h>
#include <string.h>

struct Student
{
    int number;
    char name[20];
    float grade;
};

struct Student* FindStudent(struct Student arr[], char name[])
{
    for (int i = 0; i<3; i++)
    {
        if (strcmp(arr[i].name, name) == 0)
            return &arr[i];
    }
    printf("Not Found");
    return NULL;
}

int main()
{
    struct Student std[3] = 
    {
        {1, "Kim", 4.3},
        {2, "Lee", 3.8},
        {3, "Park", 4.1}
    };

    char find[20];
    float grade;
    
    printf("수정할 학생 이름: ");
    scanf("%s", &find);
    printf("새 성적: ");
    scanf("%f", &grade);   
    struct Student* s = FindStudent(std, find);
    if (s != NULL)
    {
        s->grade = grade;
    }
    else
    {
        return 0;
    }
    for (int i = 0; i<3; i++)
            printf("%d %s %.1f \n", std[i].number, std[i].name, std[i].grade);
    
    return 0;
}

