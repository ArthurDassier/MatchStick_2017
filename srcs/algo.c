/*
** EPITECH PROJECT, 2017
** algo.c
** File description:
** blabla
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

void the_while(int *mariebd, char **map, int max, int check)
{
	int	alum = 0;
	int	save = 0;
	int	i = 0;

	while (calc(mariebd) != check) {
		if (i == 0 && alum == 0)
		save = mariebd[i];
		--mariebd[i];
		++alum;
		if (mariebd[i] < 0 || alum > max) {
			mariebd[i] = save;
			save = mariebd[i + 1];
			alum = 0;
			++i;
		}
	}
	map = modif_map(map, i + 1, alum);
	my_printf("AI removed %d match(es) from line %d\n", alum, i + 1);
}

void params_create(int *mariebd, char **map, int max)
{
	int	check = 0;

	if (calc_line(mariebd) == 1 && calc_dec(mariebd) > 1)
		check = 1;
	else if (calc_line(mariebd) == 4 && calc_dec(mariebd) == 4)
		check = 1;
	else if (calc_line_sup(mariebd) == 1 && calc_line(mariebd) > 2)
		check = 1;
	else
		the_while(mariebd, map, max, check);
}
