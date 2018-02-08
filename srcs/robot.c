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

void ai(char **map, int max)
{
	int	*mariebd = malloc(sizeof(int) * my_strlen(map[0]));
	int	i = 1;
	int	j = 0;

	while (map[i]) {
		mariebd[j] = count_st(map[i]);
		++i;
		++j;
	}
	mariebd[j] = E_O_ARRAY;
	params_create(mariebd, map, max);
}

int robot_turn(char **map, int max)
{
	my_printf("\nAI's turn...\n");
	ai(map, max);
	print_map(map);
	return (1);
}
