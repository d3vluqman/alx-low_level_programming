#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a program that prints all possinle combinations
 * of single-digit number
 *
 * Return: returns 0
 **/

int main(void)
{
int i;
for (i = 0; i <= 9; i++)
{
printf("%d, ", i);
}
putchar('\n');
return (0);
}
