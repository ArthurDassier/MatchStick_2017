/*
** EPITECH PROJECT, 2017
** fcts_while.c
** File description:
** blabla
*/

#include "my.h"

void print_map(char **map)
{
	int	j = 0;

	while (map[j]) {
		printf("%s\n", map[j]);
		++j;
	}
}

char **create_map(char **map, int sticks, int line)
{
	int i = 1;
	int j = 1;

	while (i != (line + 1)) {
		while (j != (sticks + 1)) {
			map[i][j] = ' ';
			++j;
		}
		++i;
		j = 1;
	}
	return (map);
}

void play(char **map, int sticks, int line)
{
	int	j = 1;

	map = create_map(map, sticks, line);
	while (1) {
		if (j == 1) {
			print_map(map);
			j = 0;
		}
	}
}
