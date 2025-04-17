/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_francy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 11:57:17 by mefische          #+#    #+#             */
/*   Updated: 2025/04/17 15:45:45 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c);
static char	*ft_strndup(char const *s, char c);
static char	**free_memory(char **str, int n);

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		n;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	n = count_words(s, c);
	array = ft_calloc((n + 1), sizeof(char *));
	if (!array)
		return (NULL);
	array[n] = NULL;
	n = 0;= malloc ((i + 1) * 
			i++;
		if (s[i])
		{
			array[n] = ft_strndup(&s[i], c);
			if (!array[n])
				return (free_memory(array, n));
		}
		while (s[i] != c && s[i])
			i++;
		n++;
	}
	array[n] = NULL;
	return (array);
}

static int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	if (!s)
		return (0);
	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

static char	*ft_strndup(char const *s, char c)
{
	char	*str;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	str = malloc ((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static char	**free_memory(char **str, int n)
{
	int	i;
ft_split2.c
	i = 0;
	while (i < n) //liberar memoria de cada palavra ANTERIOR
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

/*int	main(void)
{
	char	str[] = "  Hello hello      ";
	char	**array;
	int		i = 0;

	array = ft_split(str, ' ');
	printf("Word count: %d\n", count_words(str, ' '));
	while (array[i])
	{
		printf("Word %d: %s\n", i, array[i]);
		free(array[i]);
		i++;
	}
}*/