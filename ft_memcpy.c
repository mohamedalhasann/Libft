/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhassa <malhassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 18:08:23 by malhassa          #+#    #+#             */
/*   Updated: 2025/08/17 12:47:41 by malhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*cdest;
	char	*csrc;

	cdest = (char *)dest;
	csrc = (char *)src;
	if (!src && !dest)
		return (dest);
	while (n-- && csrc)
	{
		*cdest++ = *csrc++;
	}
	return (dest);
}
// int main()
// {
//  	char str1[] = "Geeks";
// 	char str2[6] = "";
//     // Copies contents of str2 to str1
//     ft_memcpy(str2, str1, sizeof(str1));

//     printf("str2 after memcpy:");
//     printf("%s\n",str2);

//     return (0);
// }
