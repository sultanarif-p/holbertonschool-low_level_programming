#include <stdio.h>
using name space ::std;
/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
int i;

printf("Infinite loop incoming :(\n");

i = 0;

while (i < 10)
{
i++;	/* putchar(i);*/
}
/*INfinite loop avoided*/
printf("Infinite loop avoided! \\o/\n");

return (0);
}
