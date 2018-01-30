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
		++sticks;
		++i;
	}
	return (sticks);
}

int alum_del(int max, int sticks_max)
{
	while ((sticks_max - max) % 4 != 0) {
		if ((sticks_max - max) == 1)
			break;
		--max;
	}
	if (max == 0)
		return (1);
	return (max);
}

int modif_map_r(char **map, int line, int matches)
{
	int	i = 1;
	int	sticks = 0;

	while (map[line][i] != '*') {
		if (map[line][i] == '|')
			++sticks;
		++i;
	}
	if (matches > sticks)
		return (0);
	i = my_strlen(map[line]) - 1;
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
	int	i = 1;
	int	sticks_max = 0;
	int	line2 = 1;
	int	alum = 0;

	while (map[i]) {
		sticks_max = count_st(map[i]);
		++i;
	}
	alum = alum_del(max, sticks_max);
	i = 1;
	while (modif_map_r(map, line2, alum) == 0 && map[line2]) {
		++line2;
		if (map[line2][1] == '*') {
			--max;
			alum = alum_del(max, sticks_max);
			line2 = 1;
		}
	}
	my_printf("AI removed %d match(es) from line %d\n", alum, line2);
}

int robot_turn(char **map, int max, int line)
{
	my_printf("\nAI's turn...\n");
	ai(map, max);
	print_map(map);
	return (1);
}
