/*
** EPITECH PROJECT, 2017
** algo.c
** File description:
** blabla
*/

#include "my.h"

int last_mv(int *mariebd, int *i)
{
	static int	done = 0;

	if (calc_line(mariebd) == 2 && calc_one(mariebd) == 2 && done == 0) {
		++done;
		return (-1);
	}
	if (calc_line(mariebd) == 2 && calc_one(mariebd) == 2 && done == 1) {
		for (int j = 0; mariebd[j] == 0; ++j)
			*i = j;
		return (-42);
	}
	if (calc_line(mariebd) == 1 && calc_one(mariebd) == 1 && *i == 0) {
		for (int j = 0; mariebd[j] == 0; ++j)
			*i = j;
		return (1);
	}
	if (calc_line(mariebd) == 4 && calc_one(mariebd) == 4)
		return (1);
	return (0);
}

void final(char **map, int alum, int i)
{
	if (alum < 0)
		alum = 1;
	map = modif_map(map, i + 1, alum);
	my_printf("AI removed %d match(es) from line %d\n", alum, i + 1);
}

void the_while(int *mariebd, char **map, int max, int check)
{
	int	alum = 0;
	int	save = 0;
	int	i = 0;

	while (calc(mariebd) != check && calc_dec(mariebd) != 1) {
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
	alum = alum + last_mv(mariebd, &i);
	final(map, alum, i);
}

void params_create(int *mariebd, char **map, int max)
{
	int	check = 0;

	the_while(mariebd, map, max, check);
}
