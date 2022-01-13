/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dridolfo <dridolfo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 14:02:00 by dridolfo          #+#    #+#             */
/*   Updated: 2022/01/13 16:17:46 by dridolfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns a new
** string, which is the result of the concatenation
** of ’s1’ and ’s2’.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*str;
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	j = ft_strlen(s1);
	k = ft_strlen(s2);
	str = malloc(j + k + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < j)
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < k)
	{
		str[i] = s1[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
