/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dridolfo <dridolfo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 17:46:19 by dridolfo          #+#    #+#             */
/*   Updated: 2022/01/13 15:21:32 by dridolfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	ft_strcmp(char *a, char *b, size_t pos)
{
	size_t	k;

	k = 0;
	while (a[pos] == b[k] && a[pos] != '\0' && b[k] != '\0')
	{
		a++;
		k++;
	}
	if (b[k] == '\0')
		return (1);
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		b;

	i = 0;
	if (!needle)
		return (haystack);
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[0])
		{
			b = ft_strcmp(haystack, needle, i);
			if (b == 1)
				return (&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
