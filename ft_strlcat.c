/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 10:43:16 by mefische          #+#    #+#             */
/*   Updated: 2025/04/10 10:54:13 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strlcat(char *restrict dst, const char *restrict src)
{
	int	i;
	int l;

	i = 0;
	l = 0;
	while (dst[l])
	{
		l++;
	}
	while (dst[l] || src[i])
	{
		dst[l] = src[i];
		i++;
		l++;
	}
	return(dst);
}
/*
int	main(void)
{
	char	dest[] = "Hello ";
	char	src[] = "World!1!!!";

	ft_strlcat(dest, src);
	printf("%s\n", dest);
}*/