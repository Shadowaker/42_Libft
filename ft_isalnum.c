/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dridolfo <dridolfo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:40:35 by dridolfo          #+#    #+#             */
/*   Updated: 2022/01/12 20:44:44 by dridolfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ftlib.h>

int	ft_isalnum(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c > 123) || (c > 47 && c < 58))
		return (1);
	return (0);
}
