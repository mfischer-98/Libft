/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:22:55 by mefische          #+#    #+#             */
/*   Updated: 2025/04/14 17:17:13 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*trim;

	if (s1 == NULL || set == NULL)
		return (NULL);

	trim = malloc ((ft_strlen(s1) + 1) * sizeof(char));
	if (trim == NULL)
		return (NULL);
		
	i = 0;
	k = 0;
	while (s1[i])
	{
	/*comparo s1 com todos os set, se acabar e nao tiver match,
	 copiamos, se nao i++*/
		j = 0;
		while (set[j] && s1[i] != set[j])
		{
			j++;
		}
		if (set[j] == '\0')
			{
				trim[k] = s1[i];
				k++;
			}
		i++;
	}
	trim[i] = '\0';
	return (trim);
}

/*int	main(void)
{
	char str1[] = "This has to be trimmed.";
	char str2[] = "ae"; 
	char *new;

	new = ft_strtrim(str1, str2);
	printf("%s\n", new);
	free(new);
	return (0);
}*/