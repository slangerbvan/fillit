#ifndef FILLIT_H
# define FILLIT_H

# include <fcntl.h>

# define BUF_SIZE 545 //26 pieces max x (1 grille =) 21 caracteres (20 + \n final ou \0 pour la derniere)

void	ft_error();
char	*ft_read_file(char *file);
int		ft_check_file(char *s);
int		ft_count_tetri(char *s);
int		ft_count_char(char *s, char c);

#endif
