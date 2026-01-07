#include "computer.h"

/*  Sum Square Difference

    Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum. 
*/

void solution1()
{
    u64 sum_squares = 0;
    u64 square_sum = 0;

    for (int i = 1; i <= 100; i++) {
        sum_squares += i*i; 
        square_sum += i;
    }

    square_sum *= square_sum;

    printf("Solution 1: %ld\n", square_sum - sum_squares);
}

void solution2()
{
    u64 sum_squares = 0;
    u64 square_sum = 0;
    u64 limit = 100;

    square_sum = limit * (limit + 1) / 2;
    square_sum *= square_sum;
    sum_squares = (2*limit+1)*(limit+1)*limit/6;

    printf("Solution 2: %ld\n", square_sum - sum_squares);
}

int main()
{
    compute(solution1());
    compute(solution2());
}
