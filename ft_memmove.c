/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhassa <malhassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 19:02:16 by malhassa          #+#    #+#             */
/*   Updated: 2025/08/17 13:49:50 by malhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*cdest;
	const unsigned char	*csrc;
	size_t				i;

	cdest = (unsigned char *)dest;
	csrc = (unsigned char *)src;
	if (!dest && !src)
		return (dest);
	if (cdest > csrc)
	{
		while (n--)
			*(cdest + n) = *(csrc + n);
	}
	else
	{
		i = 0;
		while (n--)
			*(cdest)++ = *(csrc)++;
	}
	return (dest);
}
// int	main(void)
// {
// 	char	str[100] = "Learningisfun";
// 	printf("Original string :%s\n ", str);
// 	ft_memmove(str + 8, str, 10);
// 	printf("memmove overlap : %s\n ", str);
// }
