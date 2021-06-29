#include "holberton.h"

void _puts(char *s)
{
        char *t;
        for (t = s; *t != '\0';t++)
        {
                _putchar(*t);

        }
}

