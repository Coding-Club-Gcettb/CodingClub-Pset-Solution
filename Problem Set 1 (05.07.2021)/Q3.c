/*
A binary array is an array consisting of only the values 0 and 1. Given a binary
array of any length, write a program to return an array of positive integers that
represent the lengths of the sets of consecutive 1's in the input array, in order
from left to right.

Sample Inputs and Outputs:

Example 1

Input: {0, 0, 0, 0, 0}
Output: {0}

Example 2

Input: {1, 1, 1, 1, 1}
Output: {5}

Example 3

Input: {1,1,0,1,0,0,1,1,1,0,0}
Output: {2, 1, 3}

Example 4

Input: {0,0,0,0,1,1,0,0,1,0,1,1,1}
Output: {2, 1, 3}

Contributed by Arnab De (CSE)
*/


int main(void)
{
    int n;
    printf("The size of array: ");
    scanf("%i", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &a[i]);
    }

    int b[n];
    int lim = 0;
    b[lim] = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            b[lim]++;
        }
        else if (a[i] == 0 && a[i - 1] == 1)
        {
            lim++;
            b[lim] = 0;
        }
    }
    if (b[lim] == 0)
    {
        lim--;
    }
    for (int i = 0; i <= lim; i++)
    {
        if (i == 0)
        {
            printf("%i", b[i]);
        }
        else
        {
            printf(", %i", b[i]);
        }
    }

    printf("\n");

    return 0;
}