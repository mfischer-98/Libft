/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 17:33:53 by mefische          #+#    #+#             */
/*   Updated: 2025/04/15 14:32:20 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);
	ft_bzero(mem, nmemb * size);
	return (mem);
}

/*int	main(void)
{
	int	*ptr;
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
}*/
