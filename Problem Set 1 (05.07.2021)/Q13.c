/*
Write a program to accept a number from the user and check whether the
number is circular prime or not?
[A circular prime is a prime number with the property that the number
generated at each intermediate
step when cyclically permuting its (base 10) digits will be prime.]
For example, 113 is a circular number , Since 131,311,113 all are prime
numbers.

Sample Input:
113
Sample Output:
113 is a circular prime

-----------------------------------

Sample Input:
197
Sample Output:
197 is a circular prime
Contributed by Dipanjan Mondal (EE
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <time.h>

int isprime(int a)
{
    int flag = 0;
    for (int i = 2; i <= a / 2; i++)
    {
        if (a % i == 0)
        {
            flag++;
            break;
        }
    }
    if (flag == 0)
        return 1;
    if (a <= 1 || flag == 1)
        return 0;
}

int circular(int n)
{
    int count = 0, temp = n;
    while (temp)
    {
        count++;
        temp = temp / 10;
    }
    int num = n;
    while(isprime(num))
    {
        int rem = num % 10;
        int div = num / 10;
        num = (pow(10,count-1))* rem + div;

        if (num == n )
        {
            return 1;
        }
        
    }
    return 0;
}

int main()
{
    int n ;
    
    printf("Enter the number ");
    scanf("%d",&n);
    
    if(circular(n))
    printf("Circular Prime");
    else
    printf("Not a circular prime");

    return 0;
}
