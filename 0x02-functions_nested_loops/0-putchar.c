<<<<<<< HEAD

=======
#include <stdio.h>
#include "main.h"

/* main - prints _putchar, followed by a new line.
 * return - always 0 (success)
 */

int main(void)
{
	char text[9] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');

	return (0);
}
>>>>>>> c13ba483532600f20fcddaf837522761f67b8ba8
