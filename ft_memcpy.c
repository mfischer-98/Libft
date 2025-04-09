/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:34:03 by mefische          #+#    #+#             */
/*   Updated: 2025/04/09 13:23:41 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		dest[i] = src[i];
		n--;
		i++;
	}
	i = 0;
	
	return (dest);
}

int	main(void)
{
	void source[20] = "42porto";
	void destiny[20];

	printf("memcpy: %s\n", memcpy(source, destiny, 8));
	printf("mine: %s\n", ft_memcpy(source, destiny, 8));
}