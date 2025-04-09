#ifndef LIBFT_H

# define LIBFT_H

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <stdlib.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_strlen(char *str);
void	*ft_memset(void *str, int c, size_t n);


#endif
