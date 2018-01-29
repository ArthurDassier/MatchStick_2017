/*
** EPITECH PROJECT, 2017
** matchstick.h
** File description:
** blabla
*/

#ifndef MATCHSTICK_H_
#define MATCHSTICK_H_

void play(char **tab, int nb, int line);
void print_map(char **map);
char **create_map(char **map, int sticks, int line);
int line_err_gest(char **map, int line);
int matches_err_gest(char **map, int matches, int line);
int error_gest(char **map, int *line, int *matches);

#endif
