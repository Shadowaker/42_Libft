/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dridolfo <dridolfo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 14:56:27 by dridolfo          #+#    #+#             */
/*   Updated: 2022/01/12 20:44:11 by dridolfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ftlib.h>

char	*ft_strchr(const char *s, int c)
{
	char	b;
	int		i;

	b = c;
	i = 0;
	while (s[i] != b && s[i] != '\0')
		i++;
	if (s[i] == '\0' && b != '\0')
		return (NULL);
	return (s + 1);
}
