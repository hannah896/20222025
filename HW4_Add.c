#include <stdio.h>

int main(void)
{
    int year = 2026;
    int month = 10;
    int day = 2;

    // 2026년 10월 2일 = Friday
    int week = 5;

    char *monthName[] = {
        "", "January", "February", "March", "April",
        "May", "June", "July", "August", "September",
        "October", "November", "December"
    };

    char *weekName[] = {
        "Sunday", "Monday", "Tuesday", "Wednesday",
        "Thursday", "Friday", "Saturday"
    };

    while (1)
    {
        printf("%s %d, %d is %s.\n",
               monthName[month],
               day,
               year,
               weekName[week]);

        // 2028년 10월 1일까지 출력하면 종료
        if (year == 2028 && month == 10 && day == 1)
            break;

        // 해당 월의 마지막 날짜
        int lastDay;

        if (month == 2)
        {
            if (year % 400 == 0 ||
                (year % 4 == 0 && year % 100 != 0))
                lastDay = 29;
            else
                lastDay = 28;
        }
        else if (month == 4 || month == 6 ||
                 month == 9 || month == 11)
        {
            lastDay = 30;
        }
        else
        {
            lastDay = 31;
        }

        // 다음 날짜
        day++;

        if (day > lastDay)
        {
            day = 1;
            month++;

            if (month > 12)
            {
                month = 1;
                year++;
            }
        }

        // 다음 요일
        week++;

        if (week == 7)
            week = 0;
    }

    return 0;
}
