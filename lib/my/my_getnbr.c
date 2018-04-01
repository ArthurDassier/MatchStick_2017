/*
** EPITECH PROJECT, 2017
** my_getnbr.c
** File description:
** my_getnbr
*/

#include <unistd.h>
#include <stdio.h>

int my_strlen(char const *str);

int my_getnbr(char *str)
{
	int	nb = 0;
	int	isneg = 1;
	int	i = 0;

	if (str == NULL)
		return (-1);
	if (str[0] == '-' || str[0] < '0' || str[0] > '9')
		return (-2);
	if (my_strlen(str) > 3)
		return (0);
	while (str[i] != '\0') {
		if (str[i] >= '0' && str[i] <= '9') {
			nb = nb * 10;
			nb = nb + str[i] - '0';
			i++;
		} else
			return (nb * isneg);
	}
	return (nb * isneg);
}

int my_getnbr_main(char *str)
{
	int	nb = 0;
	int	isneg = 1;
	int	i = 0;

	if (str == NULL)
		return (-1);
	if (str[0] == '-' || str[0] < '0' || str[0] > '9')
		return (-2);
	while (str[i] != '\0') {
		if (str[i] >= '0' && str[i] <= '9') {
			nb = nb * 10;
			nb = nb + str[i] - '0';
			i++;
		} else
			return (nb * isneg);
	}
	return (nb * isneg);
}
