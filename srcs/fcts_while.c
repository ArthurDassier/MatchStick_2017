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

int human_turn(char **map, int max)
{
	int	line;
	int	matches;
	int	eof;

	my_printf("\nYour turn:\n");
	my_printf("Line: ");
	while ((eof = error_gest(map, &line, &matches, max)) == -1)
		my_printf("Line: ");
	if (eof == 84)
		return (84);
	map = modif_map(map, line, matches);
	print_map(map);
	return (1);
}

int the_end(int j)
{
	if (j == 2) {
		my_printf("I lost... snif... but I'll get you next time!!\n");
		return (1);
	}
	if (j == 0) {
		my_printf("You lost, too bad...\n");
		return (2);
	}
	return (0);
}

int play(char **map, int sticks, int line, int max)
{
	int	i = 0;
	int	j = 1;

	map = create_map(map, sticks, line);
	print_map(map);
	while (j == 1) {
		if ((j = human_turn(map, max)) == 84)
			return (0);
		j = check_loose(map);
		if (j == 1) {
			j = robot_turn(map, max);
			j = check_rb_loose(map);
		}
	}
	while (map[i]) {
		free(map[i]);
		++i;
	}
	free(map);
	return (the_end(j));
}
