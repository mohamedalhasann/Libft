/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhassa <malhassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 12:26:00 by malhassa          #+#    #+#             */
/*   Updated: 2025/08/23 16:46:24 by malhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	char	x;

	x = (unsigned char)c;
	str = (char *)s;
	while (n--)
	{
		if (*str == x)
			return (str);
		str++;
	}
	return (0);
}
