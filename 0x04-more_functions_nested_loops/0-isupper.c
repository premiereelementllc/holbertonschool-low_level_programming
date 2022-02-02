#include "main.h"
/**
 *_isupper- verifies uppercase lettrs
 * @c: indicates the character
 * Return: 1 uppercase; else return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
