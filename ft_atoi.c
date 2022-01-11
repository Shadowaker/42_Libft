/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dridolfo <dridolfo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 11:50:46 by dridolfo          #+#    #+#             */
/*   Updated: 2022/01/11 11:50:50 by dridolfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_atoi(const char *str)
{
	int		i;
	int		r;
	int		s;

	i = 0;
	r = 0;
	s = 1;
	while (str[i] != '\0' && (str[i] < 48 || 57 < str[i])
		&& (str[i] != '+' && str[i] != '-'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	if (str[i] < 48 || str[i] > 57 || str[i] == '\0')
		return (NULL);
	while (str[i] != off)
	{
		r *= 10;
		r += (str[i] - 48);
		i++;
	}
	return (r);
}
