/*
** EPITECH PROJECT, 2017
** bin_conv.c
** File description:
** blabla
*/

#include "my.h"

int bin_conv(int nb)
{
	int power = 1;
	int bin = 0;

	while (power < nb) {
		power = power * 2;
	}
	while (power != 0) {
		if (power <= nb) {
			nb = nb - power;
			++bin;
			power = power / 2;
			bin = bin * 10;
		} else {
			power = power / 2;
			bin = bin * 10;
		}
	}
	bin = bin / 10;
	return (bin);
}

char *nbr_to_str(int nb)
{
	char	*str = malloc(sizeof(char) * nb + 1);
	int	i = 0;

	if (nb < 0) {
		nb = nb * (-1);
		str[i] = '-';
		++i;
	}
	while (nb > 10) {
		str[i] = itc((nb % 10) % 2);
		nb = nb / 10;
		++i;
	}
	str[i] = itc(nb % 2);
	str[i + 1] = '\0';
	my_revstr(str);
	return (str);
}
