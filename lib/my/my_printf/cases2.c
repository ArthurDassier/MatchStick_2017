/*
** EPITECH PROJECT, 2017
** cases2.c
** File description:
** Case
*/

#include "../../../include/my.h"
#include <unistd.h>

int case_o(va_list ap)
{
	int	nb = va_arg(ap, int);

	my_put_nbr_base(nb, "01234567");
	return (0);
}

int case_p(va_list ap)
{
	long	nb = va_arg(ap, long);

	if (nb == 0) {
		write(1, "(nil)", 5);
		return (0);
	}
	my_putstr("0x");
	my_put_nbr_base_long(nb, "0123456789abcdef");
	return (0);
}

int case_b(va_list ap)
{
	unsigned int	nb = va_arg(ap, unsigned int);

	my_put_nbr_base(nb, "01");
	return (0);
}

int case_mod(va_list ap)
{
	(void) ap;
	my_putchar('%');
	return (0);
}

int case_smaj(va_list ap)
{
	(void) ap;
	return (0);
}
