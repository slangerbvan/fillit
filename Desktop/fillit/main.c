#include "fillit.h"
#include "../fillit/libft/libft.h"
#include <stdio.h> ////test//////////////////////////

int		main(int ac, char **av)
{
	char	**split;

	if (ac != 2)
	{
		ft_putstr("\n---WRONG ARGUMENTS NUMBER---\n");
		return (0);
	}
	else if (ft_check_file(ft_read_file(av[1])) == 1)
	{
		ft_putstr("\n-------OK--------\n");
		printf("Nb tetri : %d\n\n", ft_count_tetri(ft_read_file(av[1]))); ///////////////test
		split = ft_strsplit(ft_read_file(av[1]), '\n');
	}
	else
	{
		ft_putstr("\n-------ERROR-------\n");
		return (0);
	}
}
