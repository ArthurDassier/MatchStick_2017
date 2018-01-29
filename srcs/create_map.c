/*
** EPITECH PROJECT, 2017
** create_map.c
** File description:
** blabla
*/

#include "my.h"

void print_map(char **map)
{
	int	j = 0;

	while (map[j]) {
		my_printf("%s\n", map[j]);
		++j;
	}
}

char **place_sticks(char **map, int i, int nb_st)
{
	int sticks = my_strlen(map[i]) - 2;
	int count = 0;
	int j;

	if (sticks % 2 != 0)
		++sticks;
	j = (sticks / 2) - (nb_st - i);
	if (nb_st == 1)
		map[i][sticks / 2] = '|';
	else {
		while (count != nb_st) {
			map[i][j] = '|';
			++j;
			++count;
		}
	}
	return (map);
}

char **put_sticks(char **map, int sticks)
{
	int	i = 1;
	int	nb_st = 1;

	while (nb_st != (sticks + 2)) {
		map = place_sticks(map, i, nb_st);
		++i;
		nb_st = nb_st + 2;
	}
	return (map);
}

char **create_map(char **map, int sticks, int line)
{
	int	i = 1;
	int	j = 1;

	while (i != (line + 1)) {
		while (j != (sticks + 1)) {
			map[i][j] = ' ';
			++j;
		}
		++i;
		j = 1;
	}
	map = put_sticks(map, sticks);
	return (map);
}
