#include <stdio.h>
#include "computer.h"

/* Multiples of 3 or 5

  If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3,5,6 and 9. The sum of these multiples is 23.

  Find the sum of all the multiples of 3 or 5 below 1000.

*/

void solution1()
{
	int sum = 0;

	for (int i = 1; i < 1000; i++)
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;

	printf("Solution 1: %d\n", sum);
}

int divisible_by(int n)
{
	int p = 999 / n;
	return n * (p * (p + 1)) / 2;
}

void solution2()
{
	int sum = divisible_by(3) + divisible_by(5) - divisible_by(15);

	printf("Solution 2: %d\n", sum);
}

int main()
{
	compute(solution1());
	compute(solution2());
}
