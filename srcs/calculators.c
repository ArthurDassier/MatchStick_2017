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

	while (mariebd[i] != -2) {
		somme = somme ^ mariebd[i];
		++i;
	}
	return (somme);
}

int calc_one(int *mariebd)
{
	int	checker = 0;
	int	i = 0;

	while (mariebd[i] != -2) {
		if (mariebd[i] == 1)
			++checker;
		++i;
	}
	return (checker);
}

int calc_line(int *mariebd)
{
	int	checker = 0;
	int	i = 0;

	while (mariebd[i] != -2) {
		if (mariebd[i] > 0)
			++checker;
		++i;
	}
	return (checker);
}

int calc_line_sup(int *mariebd)
{
	int	checker = 0;
	int	i = 0;

	while (mariebd[i] != -2) {
		if (mariebd[i] > 1)
			++checker;
		++i;
	}
	return (checker);
}

int calc_dec(int *mariebd)
{
	int	somme = 0;
	int	i = 0;

	while (mariebd[i] != -2) {
		somme = somme + mariebd[i];
		++i;
	}
	return (somme);
}
