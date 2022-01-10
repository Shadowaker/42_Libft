/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dridolfo <dridolfo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:45:09 by dridolfo          #+#    #+#             */
/*   Updated: 2022/01/10 14:48:42 by dridolfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ftlib.h>

int	ft_isascii(int c)
{
	if (c > 0 && c < 127)
		return (1);
	return (0);
}
