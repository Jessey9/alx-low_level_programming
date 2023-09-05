#include "main.h"

/**
 * create_array - function that creates an array of chars
 * @size: size of array
 * @c: character to be stored in the array
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
        unsigned int x;
        char *s;

        if (size == 0)
                return (NULL);
        s = malloc(sizeof(char) * size);

        if (s == NULL)
                return (NULL);
        for (x = 0; x < size; x++)
        {
                s[1] = c;
        }
        return (s);
}
