/*
** EPITECH PROJECT, 2017
** error_gest.c
** File description:
** blabla
*/

#include "my.h"

int line_err_gest(char **map, int line)
{
	int	i = 1;

	while (map[i][1] != '*')
		++i;
	if (line == 0 || line == i || line > i) {
		my_printf("Error: this line is out of range\n");
		return (-1);
	}
	return (0);
}

int matches_err_gest(char **map, int matches, int line, int max)
{
	int	i = 0;
	int	sticks = 0;

	if (max < matches) {
		my_printf("Error: you cannot remove more ");
		my_printf("than %d matches per turn\n", max);
		return (-1);
	}
	if (matches == 0) {
		my_printf("Error: you have to remove at least one match\n");
		return (-1);
	}
	while (map[line][i]) {
		if (map[line][i] == '|')
			++sticks;
		++i;
	}
	if (sticks < matches) {
		my_printf("Error: not enough matches on this line\n");
		return (-1);
	}
	return (0);
}

int error_gest(char **map, int *line, int *mats, int max)
{
	*line = my_getnbr(get_next_line(0));
	while (line_err_gest(map, *line) == -1) {
		my_printf("Line: ");
		*line = my_getnbr(get_next_line(0));
	}
	my_printf("Matches: ");
	*mats = my_getnbr(get_next_line(0));
	if (matches_err_gest(map, *mats, *line, max) == -1)
		return (-1);
	my_printf("Player removed %d match(es) from line %d\n", *mats, *line);
	return (0);
}
