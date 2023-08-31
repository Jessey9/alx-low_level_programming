#include "main.h"

/**
 * _strlen_recursion - A function to get the string length
 * @s: String
 * Return: Length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * compare_string - A function that compares each character in the string
 * @s: String
 * @left: Smallest iterator
 * @right: Largest iterator
 * Return: int
 */

int compare_string(char *s, int left, int right)
{
	if (*(s + left) == *(s + right))
	{
		if (left == right || left == right + 1)
			return (1);
		return (0 + compare_string(s, left + 1, right - 1));
	}
	return (0);
}
/**
 * is_palindrome - Determines if a string is a palindrome
 * @s: String to test
 * Return: 1 if a string is a palindrome and else 0
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare_string(s, 0, _strlen_recursion(s) - 1));
}
