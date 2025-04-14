/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:34:10 by mefische          #+#    #+#             */
/*   Updated: 2025/04/14 16:04:38 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	int		j;
	char	*sub;

	i = 0;
	j = 0;
	sub = malloc((len + 1) * sizeof(char));
	if (sub == NULL || s == NULL)
		return (NULL);
	while (s[i])
	{
		if (s[i] == start)
		{
			while (j < len)
			{
				sub[j] = s[i];
				j++;
				i++;
			}
			sub[j] = '\0';
			return (sub);
		}
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	*str;
	char	*sub;

	str = "I have so much to do today.";
	sub = ft_substr(str, 'm', 4);
	printf("%s", sub);
	free (sub);
	return (0);
}*/