/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhassa <malhassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 17:14:31 by malhassa          #+#    #+#             */
/*   Updated: 2025/08/17 12:27:38 by malhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*p;

	p = (char *)s;
	while (n-- && p)
		*p++ = c;
	return (s);
}
// int	main(void)
// {
// 	char str[50] = "GeeksForGeeks is for programming geeks.";
// 	printf("\nBefore memset(): %s\n", str);

// 	// Fill 8 characters starting from str[13] with '.'
// 	memset(str + 13, '.', 8 * sizeof(char));

// 	printf("After memset():  %s", str);
// 	return (0);
// }