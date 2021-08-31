#include "main.h"
#include <stdio.h>

/**
 *main- To stdout Holberton on the screen, followed by a new line
 *Return:always 0
 */
int main(void)
{
int x = 0;
char msg[] = "_putchar\n";
char c;
while (x <= 8)
{
c = msg[x];
_putchar(c);
x++;
}
return (0);
}

