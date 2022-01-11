/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dridolfo <dridolfo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:04:05 by dridolfo          #+#    #+#             */
/*   Updated: 2022/01/11 19:44:07 by dridolfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <libft.h>
#include <stdlib.h>
#include "ft_substr.c"

unsigned int	ft_counter(char const *s, char c)
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
	return (con + 1);
}

unsigned int	ft_goback(char const *s, char c, unsigned int l)
{
	while (s[l] != c && l != 0)
		l--;
	if (l == 0)
		return (l);
	return (l + 1);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	unsigned int	con;
	char			**str;

	con = ft_counter(s, c);
	str = malloc((sizeof(char *) * con) + 1);
	if (!str)
		return (NULL);
	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
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
	return (str);
}

int	main(int argc, char **argv)
{
	int		i;
	char	**result;
	char	*in;
	char	cc;

	in = "  ";
	cc = ' ';
	result = ft_split(in, cc);
	printf("=+=+=+=+=+=+= RESULT =+=+=+=+=+=+=\n");
	while (result[i] != '\0')
	{
		printf("%i: $%s$\n", i, result[i]);
		i++;
	}
	return (0);
}
