/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 12:53:51 by mefische          #+#    #+#             */
/*   Updated: 2025/04/09 13:01:08 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	unsigned char	*s2; //nao funciona com um tipo void

	i = 0;
	s2 = s;
	while (i < n)
	{
		s2[i] = '\0';
		i++;
	}
}
/*
int	main(void)
{
	char	str[] = "Hellooooooooo";

	bzero(str, 5);
	printf("Bzero function: %s\n", str);
	
	ft_bzero(str, 5);
	printf("My function: %s", str);
}*/