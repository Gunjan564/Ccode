#include<stdio.h>
int main()
{
    int n = 1;
    switch (5)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tueday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf("Wrong");
        break;
    }
}