/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsqlib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 20:46:18 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/31 18:03:40 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Included files: map_info.c, map_to_str.c*/



#ifndef BSQLIB_H
# define BSQLIB_H

int		leng(char *str); //map_to_str
char	*open_file(char *argv); //map_to_str
char	*map_infos(char *str); //map_info.c
char	**empty_da(int height, int length);  //map_to_da.c
char	**fill_da(char *str, char **dblarray); //map_to_da.c
int		length(char *str); //map_to_da.c
int		height(char *str); //map_to_da.c
char	**map_to_da(char *str); //map_to_da.c
void	put_char_da(char **str, int height); //put_array.c
void	put_int_da(int **str, int height, int length); //put_array.c
char	**chars_to_nbrs(char **map, char *map_info, int height, int length); //chars_to_nbrs.c
char	**array_to_ef(char **map, char a, int height); //chars_to_nbrs.c
int		**empty_da_int(int height, int length); //chars_to_nbrs.c
int		**nbr_array_to_int(char **map, int **empty, int height, int length); //chars_to_nbrs.c
int		**int_arr(char **ef_array, int height, int length);//chars_to_nbrs.c
int		**calc_array(int **a, int length, int height); //map_calc.c
int		ft_min(int a, int b, int c); //map_calc.c
int		sq_size(int **a, int height, int length); //max_sq.c
int		sq_size_char(char **a, int height, int length); //max_sq.c
int		ret_y(int **a, int max, int height, int length); //max_sq.c
int		ret_x(int **a, int max, int height, int length); //max_sq.c
int		**max_sq_arr(int **a, int max, int x, int y); //map_calc.c
char	**fillx(char **a, char *key, int ht, int ln); //sq_to_char.c
void	foundx(char **a, char found, int y, int x); //sq_to_char.c
char	**fchar_arr(int **a, char *key, int height, int length); //sq_to_char.c
char	**int_array_to_char(int **map, char **empty, int height, int length); //sq_to_char.c
char	**empty_da_char(int height, int length); //sq_to_char.c
char	**x_char_arr(char **arr, char *key, int ht, int ln); //ffhar_to_x.c

#endif
