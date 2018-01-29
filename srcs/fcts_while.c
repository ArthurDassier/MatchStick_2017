/*
** EPITECH PROJECT, 2017
** fcts_while.c
** File description:
** blabla
*/

#include "my.h"

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
