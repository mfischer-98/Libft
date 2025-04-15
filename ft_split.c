/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 09:38:12 by mefische          #+#    #+#             */
/*   Updated: 2025/04/15 16:48:29 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strndup(const char *s, int n)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc ((n + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	while (i < n)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

size_t	ft_countstr(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count); //talvez nao de certo, ele fez com flag
}

int	ft_addstr(char **array, char const *s, char c, int n)
{
	int	i;
	int	j;
	int	len;
	int word;
	int word_begin;

	i = -1;
	word = 0;
	word_begin = 0;
	while (n--)
	{
		len = 0;
		while (s[++i] != c)
			len++;	
		array[word] = malloc(sizeof(char) * (len + 1));
		if (!array[word])
			return (NULL);
		array[word] = ft_strndup(s, len);
		word_begin += len;
		while (s[i++] == c)
			word_begin++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	n;

	if (s == NULL)
		return (NULL);
	n = ft_ft_countstr(s, c);
	split = malloc((n + 1) * sizeof(char *));
	if (split == NULL)
		return (NULL);
	split[n] = '\0';
	ft_addstr(split, s, c, n);
	return (split);
}

int	main(void)
{
	char	*str = "The string will split in y if things go well.";
	char	**new;
	char	c;

	c = y;
	new = ft_split(str, c);
	while (*new)
		printf("%s\n", *new++);
	return (0);
}