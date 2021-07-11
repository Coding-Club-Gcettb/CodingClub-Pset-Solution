/*
Write C/C++ Program to Count Number of Words in a String

Sample input 1 : Hello there how’re you?
Sample output 1 : Total number of words in string is : 4

Sample input 2 : I write codes in cplusplus programming language
Sample output 2 : Total number of words in string is : 7

Contributed by Krishna Kishore Chowdhury (CSE)
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
