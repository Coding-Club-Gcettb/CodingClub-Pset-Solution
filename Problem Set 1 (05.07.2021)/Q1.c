/*
Write a C program to print all odd numbers from 1 to n using any loop.

Example

Input :-
Input upper limit: 10
Output :-
Odd numbers between 1 to 10:
1, 3, 5, 7, 9

Contributed by Manos Baroi (CSE)
*/

#include <stdio.h>

int main()
{
    int i, n;
    
    /* Input upper limit from user */
    printf("Print odd numbers till: ");
    scanf("%d", &n);

    printf("All odd numbers from 1 to %d are: \n", n);

    /* Start loop from 1 and increment it by 1 */
    for(i=1; i<=n; i++)
    {
        /* If 'i' is odd then print it */
        if(i%2!=0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
