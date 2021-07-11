/*
Write a program to check if a number is prime or not.

EXAMPLE 1

Input : -1
Output : Not prime.

EXAMPLE 2

Input : 4
Output : Not Prime

EXAMPLE 3
Input : 5
Output : Prime

Contributed by Imran Biswas(CSE)
*/


#include <stdio.h>
#include <math.h>

int main()
{
    int num, i, flag = 0;

    printf("Enter the number : ");

    scanf("%d", &num);

    if (num > 1)
    {
        for (i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)
            {
                printf("Not prime\n");
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            printf("Prime\n");
        }
    }
    else
    {
        printf("Not prime\n");
    }
    
    return 0;
}
