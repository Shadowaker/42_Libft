/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dridolfo <dridolfo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 13:56:29 by dridolfo          #+#    #+#             */
/*   Updated: 2022/01/13 15:19:07 by dridolfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <ftlib.h>

size_t	ft_strlen(const char *str)
{
	int		x;

	x = 0;
	while (str[x] != '\0')
		x++;
	return (x);
}
