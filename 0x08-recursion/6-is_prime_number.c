#include "main.h"

/**
 * is_prime- use recursion to find all primes
 * @n: number
 * @i: finding primes
 * Return: 1 if n is prime 0 else not prime
 */

int is_prime(int n, int i)
{
	if (i == n)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (is_prime(n, i + 1));
}

/**
 * is_prime_number- use recursion to find all primes
 * @n: number
 * Return: 1 if n is prime 0 else not prime
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, 2));
}
