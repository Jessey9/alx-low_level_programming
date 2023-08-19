#include "main.h"

/**
 * _isdigit - Checking to be sure a character is a digit
 * @x: The number to be checked
 * Retuen: 1 for a character taht will be a digit or else 0
 */

int +isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	return (0);
}
