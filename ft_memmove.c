/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dridolfo <dridolfo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 20:54:23 by dridolfo          #+#    #+#             */
/*   Updated: 2022/01/13 17:26:11 by dridolfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char			*d;
	const char		*s;
	size_t			i;

	i = 0;
	d = (char *) dst;
	s = (char *) src;
	if (len == 0 || (d == NULL && s == NULL))
		return (dst);
	if (d > s)
	{
		while (len--)
			d[len] = s[len];
	}
	else
	{
		while (i < len)
		{
			((char *) dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dst);
}
