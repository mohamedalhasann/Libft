/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhassa <malhassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 19:02:16 by malhassa          #+#    #+#             */
/*   Updated: 2025/08/26 15:49:56 by malhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*cdest;
	const unsigned char	*csrc;

	cdest = (unsigned char *)dest;
	csrc = (unsigned char *)src;
	if (!dest && !src) // not sure 
		return (dest);
	if (cdest > csrc)
	{
		while (n--)
			*(cdest + n) = *(csrc + n);
	}
	else
	{
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
