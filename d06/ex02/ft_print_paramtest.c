




void		ft_print_params_test(int argc, char argv)
{
	int		i = 0;
	int		n = 1;
	while (argv[n][i] != '\0')
    {
		ft_putchar(argv[n][i]);
		i++;
	}
	n++;
	ft_putchar('\n');
}

int		main(int argc,char argv)
{
	ft_print_params_test(argc, argv);
	return (0);
}
