/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 11:51:43 by mefische          #+#    #+#             */
/*   Updated: 2025/04/08 11:55:16 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

int	main(void)
{
	printf("%c", ft_tolower('C'));
	printf("%c", ft_tolower('b'));
	printf("%c", ft_tolower('5'));
}