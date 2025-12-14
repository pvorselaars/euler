#include <stdio.h>
#include "computer.h"

/* Largest Prime Factor

   The prime factors of 13195 are 5, 7, 13 and 29.

   What is the largest prime factor of the number 600851475143?

*/

void solution1()
{
	u64 n = 600851475143;
	u64 f = 2;
	u64 m = 0;

	while (n > 1) {
		if (n % f == 0) {
			m = f;
			n /= f;

			while (n % f == 0)
				n /= f;
		}

		f += 1;
	}

	printf("Solution 1: %ld\n", m);
}

void solution2()
{
	u64 n = 600851475143;
	u64 f = 3;
    
	while (n > 1 && f*f <= n) {
		if (n % f == 0) {
			while (n % f == 0)
				n /= f;
		}
		f += 2;
	}

	printf("Solution 2: %ld\n", n);
}

int main()
{
	compute(solution1());
	compute(solution2());
}
