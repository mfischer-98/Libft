/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 11:33:29 by mefische          #+#    #+#             */
/*   Updated: 2025/04/09 13:01:15 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	unsigned char *s2;
	
	i = 0;
	s2 = s;
	while (i < n)
	{
		s2[i] = (unsigned char) c;
		i++;
 	}
	return (s); //retorna um pointer to tipo void para o bloco de memoria
}
/*
int	main(void)
{
	char	str[] = "Hellooooooooo";

	memset(str, 'K', 5);
	printf("Memset function: %s\n", str);
	
	ft_memset(str, 'M', 5);
	printf("My function: %s", str);
}*/