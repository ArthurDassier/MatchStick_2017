/*
** EPITECH PROJECT, 2017
** win_n_def.c
** File description:
** blabla
*/

#include "my.h"

int check_loose(char **map)
{
	int	i = 1;
	int	j = 1;

	while (map[i]) {
		while (map[i][j] != '*') {
			if (map[i][j] == '|') {
				return (1);
			}
			++j;
		}
		j = 1;
		++i;
	}
	return (0);
}

int check_rb_loose(char **map)
{
	int	i = 1;
	int	j = 1;

	while (map[i]) {
		while (map[i][j] != '*') {
			if (map[i][j] == '|') {
				return (1);
			}
			++j;
		}
		j = 1;
		++i;
	}
	return (2);
}
