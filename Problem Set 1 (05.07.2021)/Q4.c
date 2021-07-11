/*
The country of Examplania has coins that are worth 1, 5, 10, 25, 100, and 500
currency units. At the Zeroth Bank of Examplania, you are trained to make
various amounts of money by using as many ¤500 coins as possible, then as
many @100 coins as possible, and so on down.
For instance, if you want to give someone @468, you would give them four
@100 coins, two @25 coins, one @10 coin, one @5 coin, and three @1
coins, for a total of 11 coins.
Write a program to return the number of coins of each currency unit you use to
make a given amount of change.

Sample Inputs and Outputs

Example 1

Input: 0
Output:
Total: 0 coins

Example 2

Input: 12
Output:
Total: 3 coins
@10: 1 coins
@1: 2 coins

Contributed by Arnab De
*/

# include <stdio.h>

int main (void)
{
    int amt, n, total = 0;
    scanf("%i", &amt);
    
    n = amt / 500;
    total += n;
    printf("@500: %i coins\n", n);
    amt = amt % 500;
    
    n = amt / 100;
    total += n;
    printf("@100: %i coins\n", n);
    amt = amt % 100;
    
    n = amt / 25;
    total += n;
    printf("@25: %i coins\n", n);
    amt = amt % 25;
    
    n = amt / 10;
    total += n;
    printf("@01: %i coins\n", n);
    amt = amt % 10;
    
    n = amt / 5;
    total += n;
    printf("@5: %i coins\n", n);
    amt = amt % 5;
    
    printf("@1: %i coins\n", amt);
    total += amt;
    
    printf("Total: %i coins\n", total);
    
    return 0;
}