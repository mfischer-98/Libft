/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:40:04 by mefische          #+#    #+#             */
/*   Updated: 2025/04/16 16:56:29 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	n_len(int n)
{
	int		len;

	len = 0;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static char	*ft_putnbr(char *str, int n)
{
	int	i;

	i = 0;
	while (*str)
	{
		str[i] = n + 48;
		i++;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = n_len(n);
	str = malloc((len + 1) * sizeof (char));
	if (!str)
		return (NULL);
	if (n == 0)
		return (0);
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	str = ft_putnbr(str, n);
	str[n + 1] = '\0';
	return (str);
}

int	main(void)
{
	printf("%s\n", ft_itoa(42));
}