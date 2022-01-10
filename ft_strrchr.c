/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dridolfo <dridolfo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 15:12:34 by dridolfo          #+#    #+#             */
/*   Updated: 2022/01/10 15:16:48 by dridolfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	b;
	char	off;
	int		i;

	b = c;
	i = 0;
	off = s[i];
	while (s[i] != '\0')
		i++;
	while (s[i] != b && s[i] != off)
		i--;
	if (s[i] == off && b != off)
		return (NULL);
	return (&s[i]);
}
