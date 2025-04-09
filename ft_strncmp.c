/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 13:49:06 by mefische          #+#    #+#             */
/*   Updated: 2025/04/08 14:10:50 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[7] = "abcde";
	char	str2[7] = "abcd";
	unsigned int	nb;

	nb = 5;
	printf("strncmp: %d\n", strncmp(str, str2, nb));
	printf("mine: %d\n", ft_strncmp(str, str2, nb));
}*/