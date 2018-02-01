/*
** EPITECH PROJECT, 2017
** algo.c
** File description:
** blabla
*/

#include "my.h"

void algo(char **map, int *mariebd, int *bin, int somme)
{
	int	i = 0;
	int	j = 0;
	int	count = 0;
	int	alum = 0;
	char	*str = nbr_to_str(somme);
	int	save = bin[j];

	while (my_getnbr(nbr_to_str(somme)) != 0) {
		++alum;
		if (mariebd[j] - alum < 0) {
			bin[j] = save;
			++j;
			save = bin[j];
			alum = 1;
		}
		somme = 0;
		bin[j] = bin_conv(mariebd[j] - alum);
		while (bin[count] != -1) {
			somme = somme + bin[count];
			++count;
		}
		count = 0;
	}
	map = modif_map(map, j+1, alum);
	my_printf("AI removed %d match(es) from line %d\n", alum, j+1);
}

void params_create(int *mariebd, char **map, int max)
{
	int	i = 0;
	int	somme = 0;
	int	*bin = malloc(sizeof(int *) * my_strlen(map[0]));
	char	*str;

	while (mariebd[i] >= 0) {
		bin[i] = bin_conv(mariebd[i]);
		++i;
	}
	bin[i] = -1;
	i = 0;
	while (bin[i] != -1) {
		somme = somme + bin[i];
		++i;
	}
	algo(map, mariebd, bin, somme);
}
