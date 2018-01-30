/*
** EPITECH PROJECT, 2017
** algo.c
** File description:
** blabla
*/

#include "my.h"

void find_del_p(int *mariebd, char **map, int max)
{
	int	i = 0;
	int	j = 0;

	while (mariebd[i] >= 0) {
		if (mariebd[i] > mariebd[j])
			j = i;
		++i;
	}
	while (max > mariebd[j])
		--max;
	map = modif_map(map, j, max);
	my_printf("AI removed %d match(es) from line %d\n", max, j);
}

void find_del_i(int *mariebd, char **map, char *str, int max)
{
	int	i = 0;
	int	j = 0;

	while (mariebd[i] >= 0) {
		if (mariebd[i] > mariebd[j] && str[i] == 'i')
			j = i;
		++i;
	}
	while (max > mariebd[j])
		--max;
	map = modif_map(map, j, max);
	my_printf("AI removed %d match(es) from line %d\n", max, j);
}

void ppi(int *mariebd, char **map, int max)
{
	int	i = 1;
	char	*str = malloc(sizeof(char) * my_strlen(map[0]));

	while (mariebd[i] >= 0) {
		if (mariebd[i] % 2 == 0 || mariebd[i] == 0) {
			str[i] = 'i';
		} else
			str[i] = 'p';
		++i;
	}
	str[i] = '\0';
	algo(mariebd, map, str, max);
}

void algo(int *mariebd, char **map, char *str, int max)
{
	int	count = 0;
	int	i = 0;

	while (str[count] != '\0') {
		if (str[count] == 'i')
			++i;
		++count;
	}
	if (i == 0) {
		find_del_p(mariebd, map, max);
	} else
		find_del_i(mariebd, map, str, max);
}
