/*
** EPITECH PROJECT, 2017
** matchstick.h
** File description:
** blabla
*/

#ifndef MATCHSTICK_H_
#define MATCHSTICK_H_

int play(char **tab, int nb, int line, int max);
void print_map(char **map);
char **create_map(char **map, int sticks, int line);
int line_err_gest(char **map, int line);
int matches_err_gest(char **map, int matches, int line, int max);
int error_gest(char **map, int *line, int *matches, int max);
int check_loose(char **map);
int check_rb_loose(char **map);
int robot_turn(char **map, int max);
char **modif_map(char **map, int line, int matches);
void params_create(int *mariebd, char **map, int max);
int bin_conv(int nb);
char *nbr_to_str(int nb);

#endif
