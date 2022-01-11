/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dridolfo <dridolfo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 13:36:44 by dridolfo          #+#    #+#             */
/*   Updated: 2022/01/11 18:24:20 by dridolfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <libft.h>

/*
** Allocates (with malloc(3)) and returns a substring
** from the string ’s’.
** The substring begins at index ’start’ and is of
** maximum size ’len’.
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;
	unsigned int	j;
	unsigned int	buffer;

	i = 0;
	j = (unsigned int) len;
	sub = malloc((len - start) + 1);
	if (!sub)
		return (NULL);
	while (s[start] != '\0' && start <= len)
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return (sub);
}
