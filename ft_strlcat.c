/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dridolfo <dridolfo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 18:09:14 by dridolfo          #+#    #+#             */
/*   Updated: 2022/01/13 16:17:58 by dridolfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dstsize2;
	size_t	srcsize;

	dstsize2 = ft_strlen(dst);
	if (dstsize == 0 || dstsize2 > dstsize)
		return (NULL);
	srcsize = ft_strlen(src);
	j = ft_strlen(dst);
	while (src[i] != '\0' && i < dstsize)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (dstsize2 + srcsize);
}
