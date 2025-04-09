/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:16:16 by mefische          #+#    #+#             */
/*   Updated: 2025/04/08 14:31:25 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	l;

	i = 0;
	l = 0;
	while (dest[l])
	{
		l++;
	}
	while (src[i] && i < size)
	{
		dest[l] = src[i];
		write(1, dest[l], 1);
		i++;
		l++; 
	}
	dest[l] = '\0';
	return (0);
}

#include <stdio.h>
#include <string.h>

int	main(void){
	char	dest[10] = "hello!";
	char	source[10] = "hello ";
	unsigned int	n;

	n = 5;
	printf("strlcpy: %s\n", strlcpy(dest, source, n));
	printf("mine: %s\n", ft_strlcpy(dest, source, n));
}