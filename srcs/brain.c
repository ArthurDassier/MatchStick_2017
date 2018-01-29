/*
** EPITECH PROJECT, 2017
** brain.c
** File description:
** blabla
*/

#include "my.h"

char **create_tab(int sticks)
{
	int	i = 0;
	int	j = 0;
	char	**tab = malloc(sizeof(char *) * (sticks + 2));

	if (tab == NULL)
		return (NULL);
	while (j != 6) {
		tab[j] = malloc(sizeof(char) * (sticks + 2));
		while (i != (sticks + 2)) {
			tab[j][i] = '*';
			++i;
		}
		tab[j][i] = '\0';
		++j;
		i = 0;
	}
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
	char	**map;

	if (ac < 2)
		return (84);
	line = my_getnbr(av[1]);
	sticks = count_base(my_getnbr(av[1]));
	map = create_tab(sticks);
	if (map == NULL)
		return (84);
	play(map, sticks, line);
	return(0);
}
