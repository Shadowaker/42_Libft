/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dridolfo <dridolfo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:04:05 by dridolfo          #+#    #+#             */
/*   Updated: 2022/01/14 20:21:10 by dridolfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_counter(char const *s, char c)
{
	unsigned int	i;
	unsigned int	con;

	i = 0;
	con = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		con++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (con);
}

static void	ft_looper(char const *s, char **str, char c, unsigned int con)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (k < con - 1 || con == 1)
		{
			str[k] = ft_substr(s, j, (size_t) i - j);
			k++;
		}
	}
	str[k] = 0;
}

char	**ft_split(char const *s, char c)
{
	unsigned int	con;
	char			**str;

	if (s == NULL)
		return (NULL);
	con = ft_counter(s, c);
	str = malloc((sizeof(char *) * (con)) + 1);
	if (!str)
		return (NULL);
	ft_looper(s, str, c, con);
	return (str);
}
