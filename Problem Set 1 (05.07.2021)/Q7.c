/*
Print a pattern of numbers from 1 to n as shown below. Each of the numbers
is separated by a single space.
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4

Input Format
The input will contain a single integer n.
Constraints : 1<=n<=1000

Sample Input 0
2
Sample Output 0
2 2 2
2 1 2
2 2 2

Sample Input 1
5
Sample Output 1
5 5 5 5 5 5 5 5 5
5 4 4 4 4 4 4 4 5
5 4 3 3 3 3 3 4 55 4 3 2 2 2 3 4 5
5 4 3 2 1 2 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 3 3 3 3 4 5
5 4 4 4 4 4 4 4 5
5 5 5 5 5 5 5 5 5

Sample Input 2
7
Sample Output 2
7 7 7 7 7 7 7 7 7 7 7 7 7
7 6 6 6 6 6 6 6 6 6 6 6 7
7 6 5 5 5 5 5 5 5 5 5 6 7
7 6 5 4 4 4 4 4 4 4 5 6 7
7 6 5 4 3 3 3 3 3 4 5 6 7
7 6 5 4 3 2 2 2 3 4 5 6 7
7 6 5 4 3 2 1 2 3 4 5 6 7
7 6 5 4 3 2 2 2 3 4 5 6 7
7 6 5 4 3 3 3 3 3 4 5 6 7
7 6 5 4 4 4 4 4 4 4 5 6 7
7 6 5 5 5 5 5 5 5 5 5 6 7
7 6 6 6 6 6 6 6 6 6 6 6 7
7 7 7 7 7 7 7 7 7 7 7 7 7

Contributed by Shuvam Bag(CSE)
*/


#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int I = n; I >= 1; I--)
    {
        for (int j = n; j > I; j--)
        {
            printf("%d ", j);
        }
        for (int i = 1; i < I * 2; i++)
        {
            printf("%d ", I);
        }
        for (int k = I + 1; k <= n; k++)
        {
            printf("%d ", k);
        }
        printf("\n");
    }
    for (int I = 2; I <= n; I++)
    {
        for (int j = n; j > I; j--)
        {
            printf("%d ", j);
        }
        for (int i = 1; i < I * 2; i++)
        {
            printf("%d ", I);
        }
        for (int k = I + 1; k <= n; k++)
        {
            printf("%d ", k);
        }
        printf("\n");
    }

    return 0;
}