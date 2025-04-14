/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 17:20:46 by mefische          #+#    #+#             */
/*   Updated: 2025/04/14 17:36:50 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	str = malloc ((ft_strlen(s) + 1) * sizeof(char));
	if (!str)
		return (NULL);

	i = 0;
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*char	alt_toupper(unsigned int i, char c)
{
	(void)i; 
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c); 
}

int	main(void)
{
	char	s[] = "LEts go";
	char	*new;

	new = ft_strmapi(s, alt_toupper);
	printf ("%s\n", new);
	free(new);
	return (0);
}*/