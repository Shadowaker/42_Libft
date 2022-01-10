/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dridolfo <dridolfo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:27:19 by dridolfo          #+#    #+#             */
/*   Updated: 2022/01/10 14:48:47 by dridolfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ftlib.h>

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}
