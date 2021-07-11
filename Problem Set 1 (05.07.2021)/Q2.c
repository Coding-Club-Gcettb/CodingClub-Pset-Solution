/*
Write a C program to input the week number(1-7) and print the corresponding
day of week name .

Example

Input :-
Input week number: 1
Output :-
Monday

Contributed by Manos Baroi (CSE)
*/

#include <stdio.h>

int main()
{
    int day;

    printf("Enter a number between 1 to 7 : ");

    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;

    default:
        printf("Not a valid day\n");
        break;
    }

    return 0;
}