#include <stdio.h>
int main()
{
    int day;
    printf("Enter the day : ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Saturday");
        break;
    case 2:
        printf("sunday");
        break;
    case 3:
        printf("Monday");
        break;
    case 4:
        printf("Tuesday");
        break;
    case 5:
        printf("Wednesday");
        break;
    case 6:
        printf("Thusday");
        break;
    case 7:
        printf("Friday");
        break;
    default:
        printf("Invalid day");
    }

    return 0;
}
