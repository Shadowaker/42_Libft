/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dridolfo <dridolfo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 14:31:11 by dridolfo          #+#    #+#             */
/*   Updated: 2022/01/10 15:17:40 by dridolfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_bzero(void *b, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *) b;
	while (len-- > 0)
		*(p++) = '\0';
	return (b);
