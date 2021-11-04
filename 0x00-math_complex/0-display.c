#include "holberton.h"

int main(void)
{
    complex c1;

    c1.re = 1;
    c1.im = 2;
    display_complex_number(c1);
    c1.re = 1;
    c1.im = 0;
    display_complex_number(c1);
    return (0);
}

/**
 * display_complex_number - displays the complex numbers
 * @c - input complex to be displayed
 */
void display_complex_number(complex c)
{
	if (c.re == 0)
	{
		if (c.im < 0)
			printf("- %.9gi\n", c.im * (-1));
		else if (c.im == 0)
			printf("0\n");
		else
			printf("%.9gi\n", c.im);
	}
	else
	{
		if (c.im < -1)
			printf("%.9g - %.9gi\n", c.re, c.im * (-1));
		else if (c.im == -1)
			printf("%.9g - i\n", c.re);
		else if (c.im == 0)
			printf("%.9g\n", c.re);
		else if (c.im == 1)
			printf("%.9g + i\n", c.re);
		else
			printf("%.9g + %.9gi\n", c.re, c.im);
	}
}
