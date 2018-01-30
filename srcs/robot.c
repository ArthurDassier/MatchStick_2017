/*
** EPITECH PROJECT, 2017
** robot.c
** File description:
** blabla
*/

#include "my.h"

int count_st(char *map)
{
	int	i = 1;
	int	sticks = 0;

	while (map[i] != '*') {
		if (map[i] == '|')
			++sticks;
		++i;
	}
	return (sticks);
}

int modif_map_r(char **map, int line, int matches)
{
	int	i = my_strlen(map[line]) - 1;

	while (map[line][i] && matches != 0) {
		if (map[line][i] == '|') {
			map[line][i] = ' ';
			--matches;
		}
		--i;
	}
	return (1);
}

void ai(char **map, int max)
{
	int	*mariebd = malloc(sizeof(int *) * my_strlen(map[0]));
	int	i = 0;
	int	j = 0;

	while (map[i]) {
		mariebd[j] = count_st(map[i]);
		++i;
		++j;
	}
	mariebd[i] = -1;
	ppi(mariebd, map, max);
}

int robot_turn(char **map, int max)
{
	my_printf("\nAI's turn...\n");
	ai(map, max);
	print_map(map);
	return (1);
}
