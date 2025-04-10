/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:34:03 by mefische          #+#    #+#             */
/*   Updated: 2025/04/10 16:21:37 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	size_t			i;
	unsigned char	*pdest;
	unsigned char	*psrc;

	i = 0;
	pdest = (unsigned char *) dest;
	psrc = (unsigned char *) src;
	while (n > 0)
	{
		pdest[i] = psrc[i];
		n--;
		i++;
	}
	pdest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char source[8] = "42porto";
	char dest[8];

	ft_memcpy(dest, source, 2);
	printf("%s", dest);
}*/