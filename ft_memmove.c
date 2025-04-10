/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 11:49:37 by mefische          #+#    #+#             */
/*   Updated: 2025/04/10 12:34:23 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void restrict *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*s;
	unsigned char	*d;

	//falta condicao para overlapping memory
	i = 0;
	s = (unsigned char *) src;
	d = (unsigned char *) dest;
	while (s[i] && i < n)
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	str[] = "lets gooo";
	char	dest[] = "";

	ft_memmove(dest, str, 2); //copies 2 bytes
	printf("%s", dest);
}*/

/*Quero copiar n bytes do source para dest*/