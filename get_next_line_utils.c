/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:36:21 by jdutschk          #+#    #+#             */
/*   Updated: 2022/04/01 18:51:50 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	int	x;

	x = 0;
	while (s[x])
		x++;
	return (x);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		x;
	int		y;

	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc ((ft_strlen((char *)s1)
				+ ft_strlen((char *)s2) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	x = -1;
	while (s1[++x])
		str[x] = s1[x];
	x = -1;
	y = ft_strlen(s1);
	while (s2[++x])
	{
		str[y] = s2[x];
		y++;
	}
	str[y] = '\0';
	free((char *)s1);
	return (str);
}

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*new;

	total = count * size;
	new = malloc(total);
	if (!new)
		return (NULL);
	ft_bzero(new, total);
	return (new);
}

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*dest;

	dest = s;
	while (n-- > 0)
		*dest++ = 0;
}
