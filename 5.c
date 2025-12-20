#include "computer.h"

/*  Smallest Multiple

    2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

    What is the smallest positive number that is evenly divisible with no remainder by all of the numbers from 1 to 20?
*/

void solution1()
{
    int i = 1;
    while (i++) {
        bool ed = true;
        for (int j = 1; j <= 20; j++) {
            if (i % j != 0) {
                ed = false;
                break;
            }
        }

        if (ed)
            break;

    }

    printf("Solution 1: %d\n", i);
}

int p[] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71 };

void solution2()
{
    int k = 20, N = 1, i = 0;
    bool check = true;
    int limit = sqrt(k);
    int a[20] = { 0 };

    while (p[i] <= k) {
        a[i] = 1;
        if (check) {
            if (p[i] <= limit) {
                a[i] = floor(log(k) / log(p[i]));
            } else {
                check = false;
            }
        }

        N *= pow(p[i], a[i]);
        i++;
    }

    printf("Solution 2: %d\n", N);
}

int main()
{
    compute(solution1());
    compute(solution2());
}
