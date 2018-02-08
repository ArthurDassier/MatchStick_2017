/*
** EPITECH PROJECT, 2017
** win_n_def.c
** File description:
** blabla
*/

#include "my.h"

int the_checker(char **map, int i)
{
	int	j = 1;

	while (map[i][j] != '*') {
		if (map[i][j] == '|')
			return (1);
		++j;
	}
	return (0);
}

int check_loose(char **map)
{
	int	i = 1;

	while (map[i]) {
		if (the_checker(map, i) == 1)
			return (1);
		++i;
	}
	return (0);
}

int check_rb_loose(char **map)
{
	int	i = 1;

	while (map[i]) {
		if (the_checker(map, i) == 1)
			return (1);
		++i;
	}
	return (2);
}
