/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fchar_to_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 17:54:08 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/31 18:02:43 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsqlib.h"

char	**x_char_arr(char **arr, char *key, int ht, int ln)
{
	char	**xarr;

	xarr = fillx(arr, key, ht, ln);
	return (xarr);
}

