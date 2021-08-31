#include "main.h"

/**
 *print_alphabet_x10 -prints the alphabets 10 times,in lower case,
 *followed by a new line.
 */
void print_alphabet_x10(void)
{
char al;
int x;
x = 0;
while (x < 10)
{
al = 'a';
while (al <= 'z')
{
_putchar(al);
al++;
}
_putchar('\n');
x++;
}
}
