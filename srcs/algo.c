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
	printf("%d\n", somme);
	return (somme);
}

void params_create(int *mariebd, char **map, int max)
{
	int	alum = 0;
	int	save = 0;
	int	i = 0;

	while (calc(mariebd) != 0) {
		--mariebd[i];
		++alum;
		if (i == 0 && alum == 0)
			save = mariebd[i];
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
