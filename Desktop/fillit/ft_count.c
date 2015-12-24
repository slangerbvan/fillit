#include "fillit.h"
#include "../fillit/libft/libft.h"

int		ft_count_char(char *s, char c)
{
	int count;

	count = 0;
	while (*s)
	{
		if (*s == c)
			count++;
		s++;
	}
	return (count);
}

int		ft_count_tetri(char *s)
{
	int i;

	i = ft_count_char(s, '#');
	i = i / 4;
	return (i);
}
