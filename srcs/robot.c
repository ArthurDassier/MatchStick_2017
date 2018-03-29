/*
** EPITECH PROJECT, 2017
** robot.c
** File description:
** blabla
*/

#include "my.h"

void final(char **map, int i)
{
	map = modif_map(map, i, 1);
	my_printf("AI removed 1 match(es) from line %d\n", i);
}

int test_map(char *map, char **big_map, int j)
{
	int	i = 0;

	while (map[i] != '\0') {
		if (map[i] == '|') {
			final(big_map, j);
			return (1);
		}
		++i;
	}
	return (0);
}

void ai(char **map, int max)
{
	int	i = 0;

	(void) max;
	while (map[i]) {
		if (test_map(map[i], map, i) == 1)
			return;
		++i;
	}
}

int robot_turn(char **map, int max)
{
	my_printf("\nAI's turn...\n");
	ai(map, max);
	print_map(map);
	return (1);
}
