/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:16:16 by mefische          #+#    #+#             */
/*   Updated: 2025/04/10 17:48:09 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dest, const char *src, unsigned int size)
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
