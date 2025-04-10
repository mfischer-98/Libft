/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 10:55:43 by mefische          #+#    #+#             */
/*   Updated: 2025/04/10 11:40:41 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	j;

	if (*needle == '\0')
		return ((char *) haystack);
	i = 0;
	while (haystack[i])
	{
		j = 0;
		while (haystack[i + j] && needle[j] && (haystack[i + j] == needle[j]))
		{
			j++;
		}
		if(needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	const char	*hay = "Today is a hard day for me.";
	const char	*needle = "day";
	const char	*res;

	res = ft_strstr(hay, needle);
	printf ("%s\n", res);
	return (0);
}*/