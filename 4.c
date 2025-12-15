#include "computer.h"

/*  Largest Palindrome Product

    A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 x 99.

    Find the largest palindrome made from the product of two 3-digit numbers.
 
*/

bool is_palindrome(int n) {
    int original = n;
    int reverse = 0;
    while (n > 0) {
        reverse = reverse * 10 + (n % 10);
        n /= 10;
    }

    return reverse == original;
}

void solution1()
{
    int max = 0;
    for (int i = 999; i >= 100; i--) {
        for (int j = i; j >= 100; j--) {
            int product = i * j;
            if (product <= max)
                break;

            if (is_palindrome(product))
                max = product;
        }
    }

    printf("Solution 1: %d\n", max);

}

void solution2()
{
    int max = 0, j, dj;
    for (int i = 999; i >= 100; i--) {
        if (i % 11 == 0) {
            j = 999; 
            dj = 1;
        } else {
            j = 990;
            dj = 11;
        }

        for (; j >= i; j -= dj) {
            int product = i * j;
            if (product <= max)
                break;

            if (is_palindrome(product))
                max = product;
        }
    }

    printf("Solution 2: %d\n", max);

}

int main()
{
    compute(solution1());
    compute(solution2());
}
