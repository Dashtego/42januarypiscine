/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/22 19:10:28 by imelvill          #+#    #+#             */
/*   Updated: 2017/02/01 23:24:35 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		is_prime(int	nb)
{
	int		i;

	if ((nb % 2) == 0)
		return (0);
	i = 3;
	while (i < (nb/2))
	{
		if ((nb % i) == 0)
		{
			return(0);
		}
		i += 2;
	}
	return (1);
}

int		sum_of_prime(nb)
{
	int		sum;

	sum = 0;
	while (nb > 1)
	{
		sum += ((nb) * (is_prime(nb)));
		nb--;
	}
	return (sum);
}

int		atoi(char *str)
{
	int		nb;
	int		i;

	i = 0;
	nb = 0;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + str[i] - '0';
		i++;
	}
	return (nb);
}

int		main(int argc, char **argv)
{
	int		nb;

	if (argc != 2)
		return (0);
	nb = atoi(argv[1]);
	if (sum_of_prime(nb) == 0)
	{
		printf("Invalid number entered\n");
		return (0);
	}
	printf("The sum of prime numbers less than or equal to %s is %d\n", argv[1], sum_of_prime(nb));
	
	return (0);
}
