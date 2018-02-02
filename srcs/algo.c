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

	while (mariebd[i] != -1) {
		somme = somme ^ mariebd[i];
		++i;
	}
	return (somme);
}

int calc_dec(int *mariebd)
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
	if ((checker == 1 && somme > 1) || (checker == 2 && somme == 2))
		return (2);
	if (checker == 3 && somme == 4)
		return (3);
	return (somme);
}

void params_create(int *mariebd, char **map, int max)
{
	int	alum = 0;
	int	save = 0;
	int	i = 0;
	int	check = 0;

	if (calc_dec(mariebd) == 2)
		check = 1;
	if (calc_dec(mariebd) == 3)
		check = 2;
	while (calc(mariebd) != check) {
		if (i == 0 && alum == 0)
		save = mariebd[i];
		--mariebd[i];
		++alum;
		if (mariebd[i] < 0) {
			mariebd[i] = save;
			save = mariebd[i + 1];
			alum = 0;
			++i;
		}
	}
	map = modif_map(map, i + 1, alum);
	my_printf("AI removed %d match(es) from line %d\n", alum, i + 1);
}
