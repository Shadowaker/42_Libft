/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dridolfo <dridolfo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 14:14:24 by dridolfo          #+#    #+#             */
/*   Updated: 2022/01/12 16:05:16 by dridolfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <libft.h> */

/*
** Allocates (with malloc(3)) and returns a copy of
** ’s1’ with the characters specified in ’set’ removed
** from the beginning and the end of the string.
*/

#include <libft.h>

static unsigned int	ft_con(char c, char const *set)
{
	unsigned int	j;

	j = 0;
	while (set[j] != '\0')
	{
		if (c == (char) set[j])
			return (1);
		j++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	k;
	unsigned int	con;
	char			*str;

	i = 0;
	while (s1[i] != '\0' && (ft_con(s1[i], set) == 1))
		i++;
	k = ft_strlen(s1) - 1;
	while ((ft_con(s1[k], set) == 1) && k > i)
		k--;
	con = k - i;
	str = ft_substr(s1, i, con);
	if (!str)
		return (NULL);
	return (str);
}
