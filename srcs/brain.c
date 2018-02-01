/*
** EPITECH PROJECT, 2017
** brain.c
** File description:
** blabla
*/

#include "my.h"

char **create_tab(int sticks, int line)
{
	int	i = 0;
	int	j = 0;
	char	**tab = malloc(sizeof(char *) * (sticks + 3));

	if (tab == NULL)
		return (NULL);
	while (j != (line + 2)) {
		tab[j] = malloc(sizeof(char) * (sticks + 3));
		while (i != (sticks + 2)) {
			tab[j][i] = '*';
			++i;
		}
		tab[j][i] = '\0';
		++j;
		i = 0;
	}
	tab[j] = '\0';
	return (tab);
}

int count_base(int sticks)
{
	return (sticks * 2 - 1);
}

int main(int ac, char *av[])
{
	int	sticks;
	int	line;
	int	max;
	char	**map;

	if (ac < 3 || ac > 3)
		return (84);
	line = my_getnbr(av[1]);
	max = my_getnbr(av[2]);
	sticks = count_base(my_getnbr(av[1]));
	map = create_tab(sticks, line);
	if (map == NULL)
		return (84);
	return (play(map, sticks, line, max));
}
