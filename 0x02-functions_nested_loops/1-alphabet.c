#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * print_alphabet - program function
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
char alpha;

for (alpha = 'a'; alpha <= 'z'; alpha++)
{
putchar(alpha);
}
putchar('\n');
}
