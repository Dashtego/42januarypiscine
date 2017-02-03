/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testcountparams.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 20:53:30 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/19 20:53:31 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		count_params(int argc, char **argv)
{
	int		i;
	int		n;
	int		k; //total space of array

	k = 0;
	n = 1;
	while (n < argc)
	{
		i = 0;
		while (argv[n][i] != '\0')
		{
			i++;
		}
		n++;
	if (n == argc)
	{
		k--;
	}
	k += (i+1);
	}
	return (k);
}

int main(int argc, char **argv)
{
    int     p;
    p = count_params(argc, argv);
    printf("String Length = %d", p);
    return 0;
}
