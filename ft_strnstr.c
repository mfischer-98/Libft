/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:16:44 by mefische          #+#    #+#             */
/*   Updated: 2025/04/11 16:58:02 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if ((!little || !big)  && len == 0)
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] && little[i + j] && big[i + j] == little[i + j])
		{
			j++;
		}
		if (little[j] == '\0')
			return ((char *)&big[(i + j)]);
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char	big[] = "Today is a good day.";
	char	little[] = "good";
	char	*p;

	p = ft_strnstr(big, little, 15);
	printf("%s", p);
}