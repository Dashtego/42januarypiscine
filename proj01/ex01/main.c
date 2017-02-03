/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/22 11:10:05 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/22 15:00:19 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
int		match(char *s1, char *s2);

int		main(void)
{
	printf("T1:  S1 = 'abc'     S2 = 'abc'     Expected = 1 Answer = %i\n", match("abc", "abc"));
	printf("T2:  S1 = 'abc'     S2 = '*'       Expected = 1 Answer = %i\n", match("abc", "*"));
	printf("T3:  S1 = 'abc'     S2 = '*****'   Expected = 1 Answer = %i\n", match("abc", "*****"));
	printf("T4:  S1 = 'abc'     S2 = 'a***'    Expected = 1 Answer = %i\n", match("abc", "a***"));
	printf("T5:  S1 = 'main.c'  S2 = '*.c'     Expected = 1 Answer = %i\n", match("main.c", "*.c"));
	printf("T6:  S1 = 'main.c'  S2 = '*.c*'    Expected = 1 Answer = %i\n", match("main.c", "*.c*"));
	printf("T7:  S1 = 'super'   S2 = '*s*'     Expected = 1 Answer = %i\n", match("super", "*s*"));
	printf("T8:  S1 = '*.c'     S2 = '*.c*'    Expected = 1 Answer = %i\n", match("*.c", "*.c"));
	printf("T9:  S1 = '*a**b*'  S2 = '*a*b**'  Expected = 1 Answer = %i\n", match("*a**b*", "*a*b**"));
	printf("T13x:S1 = '**'      S2 = '****'    Expected = 1 Answer = %i\n", match("*****", "*"));
	printf("T10: S1 = 'main.c'  S2 = '.c*'     Expected = 0 Answer = %i\n", match("main.c", ".c*"));
	printf("T11: S1 = 'abc'     S2 = '***a'    Expected = 0 Answer = %i\n", match("abc", "***a"));
	printf("T12: S1 = 'abc'     S2 = 'Abc'     Expected = 0 Answer = %i\n", match("abc", "Abc"));
	printf("T13: S1 = 'abc'     S2 = 'A**'     Expected = 0 Answer = %i\n", match("abc", "A**"));
	printf("T13: S1 = ''        S2 = ''        Expected = 0 Answer = %i\n", match("", ""));
	printf("T13: S1 = ''        S2 = '*a'      Expected = 0 Answer = %i\n", match("", "*a"));
	return (0);
}
