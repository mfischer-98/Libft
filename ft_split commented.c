/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 11:57:17 by mefische          #+#    #+#             */
/*   Updated: 2025/04/16 14:03:10 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count_words(char const *s, char c);
static	int add_words(char **array, char const *s, char c, int n);
static	char *ft_strndup(char const *s, int n);
//mais uma funcao free?

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		n;

	if (s == NULL)
		return (NULL);
	n = count_words(s, c);
	array = ft_calloc((n + 1), sizeof(char *));
	if (!array)
		return (NULL);
	array[n] = '\0';
	add_words(array, s, c, n); //mais um if para caso !array?
	return (array);
}

static int	count_words(char const *s, char c)
{
	int	i;
	int	count;

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
	int	start; //onde a próxima palavra começa

	i = 0; // caracter de comparaçao pra caso comece em caracter, assim pulo ele
	word = 0;
	while (n--) //cada volta é uma palavra
	{
		len = 0;
		while (s[i] == c)
			i++;
		start = i; //a palavra começa onde começa seu caracter + a lenght das anteriores
		while (s[i++] != c)
		{
			len++;
		}
		array[word] = malloc ((len + 1) * (sizeof (char)));
		if (!array[word])
			return (-1); //falha ao alocar memoria
		array[word] = ft_strndup(&s[start], len);
		word++; //passando para a próxima palavra
	}
	return (0); //sucess
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

/*int	main(void)
{
	char	str[] = "    Separate these words here.";
	char	**array;
	int		i = 0;

	array = ft_split(str, ' ');
	while (array[i])
	{
		printf("Word %d: %s\n", i, array[i]);
		free(array[i]);
		i++;
	}
	printf("Word count: %d\n", count_words(str, ' '));
}*/