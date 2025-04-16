/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 11:57:17 by mefische          #+#    #+#             */
/*   Updated: 2025/04/16 16:37:02 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c);
static int	add_words(char **array, char const *s, char c, int n);
static char	*ft_strndup(char const *s, int n);

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		n;

	if (!s)
		return (NULL);
	n = count_words(s, c);
	array = ft_calloc((n + 1), sizeof(char *));
	if (!array)
		return (NULL);
	array[n] = "\0";
	add_words(array, s, c, n);
	if (!array)
		return (NULL);
	return (array);
}

static int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	if (!s)
		return (0);
	i = 0;
	count = 1;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}

static int	add_words(char **array, char const *s, char c, int n)
{
	int	i;
	int	len;
	int	word;
	int	start;

	i = 0;
	word = 0;
	while (n--)
	{
		len = 0;
		while (s[i] == c)
			i++;
		start = i;
		while (s[i++] != c)
		{
			len++;
		}
		array[word] = malloc ((len + 1) * (sizeof (char)));
		if (!array[word])
			return (1);
		array[word] = ft_strndup(&s[start], len);
		word++;
	}
	return (0);
}

static char	*ft_strndup(char const *s, int n)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc ((n + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (i < n)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

//void	free_all(char **array, int n);
/*int	main(void)
{
	char	str[] = "        ";
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