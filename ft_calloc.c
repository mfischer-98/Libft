/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 17:33:53 by mefische          #+#    #+#             */
/*   Updated: 2025/04/14 17:24:18 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);
	while (i < nmemb * size)
	{
		mem[i] = '0';
		i++;
	}
	return (mem);
	//check overflow and initialize in 0s
}

/*int	main(void)
{
	int *ptr;
	int	i;

	i = 0;
	ptr = ft_calloc(5, sizeof(int));
	while(i < 5)
	{
		printf("%d\n", ptr[i]);
		i++;
	}
	free (ptr);
	return (0);
}/*/