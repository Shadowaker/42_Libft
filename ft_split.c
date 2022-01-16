/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dridolfo <dridolfo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:04:05 by dridolfo          #+#    #+#             */
/*   Updated: 2022/01/16 20:32:31 by dridolfo         ###   ########.fr       */
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
		if (s[i] != '\0')
			con++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (con);
}

static int	ft_strstr(char const *s, char c)
{
	unsigned int	m;

	m = 0;
	while (s[m] != '\0')
	{
		if (s[m] == c)
			return (1);
		m++;
	}
	return (0);
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
		if (k < con)
		{
			str[k] = ft_substr(s, j, (size_t)(i - j));
			k++;
		}
	}
	str[k] = NULL;
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
	if (con == 0)
		str[0] = NULL;
	else if (con == 1 && !ft_strstr(s, c))
	{
		str[0] = ft_substr(s, 0, ft_strlen(s));
		str[1] = NULL;
	}
	else
		ft_looper(s, str, c, con);
	return (str);
}
