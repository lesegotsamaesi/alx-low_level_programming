#include "main.h"
#include <stdio.h>
#include <math.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: number to calculate the natural square root
 *
 * Return:the natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Calculate natural square root
 * @n: number to calculate the square root
 * @1: iterate number
 *
 * Return: the natural square root
 */
int number(int n, int root)
{
	if (n * n == root)
		return (n);
	if (n == root)
		return (-1);
	return (1 * number(n + 1, root));
}

