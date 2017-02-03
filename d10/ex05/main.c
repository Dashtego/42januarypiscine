//
//  main05.c
//  
//
//  Created by Akinfemi Akin-Aluko on 1/23/17.
//
//

#include <stdio.h>

int		ft_is_sort(int *tab, int length, int (*f)(int, int));

int		check_sort(int a, int b)
{
    if (a == b)
        return (0);
    else if (a > b)
        return (1);
    else if (a < b)
        return (-1);
    return (0);
}

int		main(void)
{
    int res;
    int tab1[5] = { 1, 2, 3, 4, 5 };
    res = ft_is_sort(tab1, 5, &check_sort);
    printf("Expected: 1, %d\n", res);
    int tab2[5] = { 1, 1, 3, 4, 5 };
    res = ft_is_sort(tab2, 5, &check_sort);
    printf("Expected: 1, %d\n", res);
    int tab3[5] = { 0, 2, 3, 4, 5 };
    res = ft_is_sort(tab3, 5, &check_sort);
    printf("Expected: 1, %d\n", res);
    int tab4[5] = { 1, 5, 3, 4, 5 };
    res = ft_is_sort(tab4, 5, &check_sort);
    printf("Expected: 0, %d\n", res);
    int tab5[5] = { 1, 0, 3, 4, 5 };
    res = ft_is_sort(tab5, 5, &check_sort);
    printf("Expected: 0, %d\n", res);
    int tab6[5] = { 4, 2, 2, 2, 2 };
    res = ft_is_sort(tab6, 5, &check_sort);
    printf("Expected: 1, %d\n", res);
    int tab7[5] = { -2, -3, -4, -5, -6 };
    res = ft_is_sort(tab7, 5, &check_sort);
    printf("Expected: 1, %d\n", res);
    int tab8[5] = { 0, -1, -2, -3, -4 };
    res = ft_is_sort(tab8, 5, &check_sort);
    printf("Expected: 1, %d\n", res);
    int tab9[5] = { 6, 6, 5, 4, 3 };
    res = ft_is_sort(tab9, 5, &check_sort);
    printf("Expected: 1, %d\n", res);
    int tab0[5] = { 4, 2, 1, 0, -1 };
    res = ft_is_sort(tab0, 5, &check_sort);
    printf("Expected: 1, %d\n", res);
    int tabA[3] = { 4, 2, 1};
    res = ft_is_sort(tabA, 3, &check_sort);
    printf("Expected: 1, %d\n", res);
    int tabB[2] = { 4, 2};
    res = ft_is_sort(tabB, 2, &check_sort);
    printf("Expected: 1, %d\n", res);
    int tabC[1] = { -1 };
    res = ft_is_sort(tabC, 1, &check_sort);
    printf("Expected: 1, %d\n", res);
    int tabD[5] = { 4, 2, 1, 0, -1 };
    res = ft_is_sort(tabD, -1, &check_sort); //-ve length
    printf("Expected: 0, %d\n", res);
    
    //res = ft_is_sort(tab, 5, &check_sort);
//    printf("%d\n", res);
    return (0);
}
