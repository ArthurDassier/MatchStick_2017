/*
** EPITECH PROJECT, 2017
** calculators.c
** File description:
** Arthur
*/

#include "my.h"

int calc(int *mariebd)
{
	int	somme = 0;
	int	i = 0;
	int	j = 0;

	while (mariebd[i] != -1) {
		somme = somme ^ mariebd[i];
		++i;
		if (mariebd[i] > 0)
			++j;
	}
	return (somme);
}

int calc_line(int *mariebd)
{
	int	checker = 0;
	int	somme = 0;
	int	i = 0;

	while (mariebd[i] != -1) {
		somme = somme + mariebd[i];
		++i;
		if (mariebd[i] > 0)
			++checker;
	}
	return (checker);
}

int calc_line_sup(int *mariebd)
{
	int	checker = 0;
	int	somme = 0;
	int	i = 0;

	while (mariebd[i] != -1) {
		somme = somme + mariebd[i];
		++i;
		if (mariebd[i] > 1)
			++checker;
	}
	return (checker);
}

int calc_dec(int *mariebd)
{
	int	somme = 0;
	int	i = 0;

	while (mariebd[i] != -1) {
		somme = somme + mariebd[i];
		++i;
	}
	return (somme);
}
