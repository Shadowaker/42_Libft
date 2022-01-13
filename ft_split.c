/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dridolfo <dridolfo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:04:05 by dridolfo          #+#    #+#             */
/*   Updated: 2022/01/13 16:17:28 by dridolfo         ###   ########.fr       */
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
		if (s[i] == c)
			con++;
		i++;
	}
	return (con);
}

static unsigned int	ft_goback(char const *s, char c, unsigned int l)
{
	while (s[l] != c && l > 0)
		l--;
	if (l == 0 && s[l] != c)
		return (l);
	return (l + 1);
}

static void	ft_looper(char const *s, char **str, char c)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && i > 0)
		{
			j = ft_goback(s, c, i - 1);
			str[k] = ft_substr(s, j, i - 1);
			k++;
		}
		i++;
		if (s[i] == '\0' && s[i - 1] != c)
		{
			j = ft_goback(s, c, i - 1);
			str[k] = ft_substr(s, j, i - 1);
			k++;
		}
	}
	str[k] = 0;
}

char	**ft_split(char const *s, char c)
{
	unsigned int	it;
	unsigned int	con;
	char			**str;

	con = ft_counter(s, c);
	str = malloc((sizeof(char *) * (con + 1)) + 1);
	if (!str)
		return (NULL);
	if (ft_strlen(s) == con)
	{
		str[0] = 0;
		return (str);
	}
	ft_looper(s, str, c);
	return (str);
}
