/*
** EPITECH PROJECT, 2017
** fcts_while.c
** File description:
** blabla
*/

#include "my.h"

char **modif_map(char **map, int line, int matches)
{
	int	i = my_strlen(map[line]) - 1;

	while (map[line][i] && matches != 0) {
		if (map[line][i] == '|') {
			map[line][i] = ' ';
			--matches;
		}
		--i;
	}
	return (map);
}

int human_turn(char **map)
{
	int	line;
	int	matches;

	my_printf("\nYour turn:\n");
	my_printf("Line: ");
	while (error_gest(map, &line, &matches) == -1)
		my_printf("Line: ");
	map = modif_map(map, line, matches);
	print_map(map);
	return (1);
}

void play(char **map, int sticks, int line)
{
	int	j = 1;

	map = create_map(map, sticks, line);
	print_map(map);
	while (1) {
		if (j == 1)
			j = human_turn(map);
	}
}
