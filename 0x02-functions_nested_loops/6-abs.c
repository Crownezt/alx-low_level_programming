#include "main.h"

/**
 * _abs - displays the absolute value of an integer
 * @c: the given number
 * Return: the absolute value of a number
 */

int _abs(int c)
{
	if (c < 0)
	{
		int ans;

		ans = c * -1;
		return (ans);
	}
	return (c);
}
