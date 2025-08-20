/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhassa <malhassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 12:34:44 by malhassa          #+#    #+#             */
/*   Updated: 2025/08/19 14:07:04 by malhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (len-- && big[i])
	{
		k = i;
		while (big[k] == little[j] && len--)
		{
			j++;
			k++;
		}
		if (little[j])
		{
			j = 0;
			k = i;
		}
		else
			return ((char *)(&big[i]));
		i++;
	}
	return (NULL);
}

// int main(void)
// {
//      const char *largestring = "Foo Bar Baz";
//            const char *smallstring = "Bar";
//            char *ptr;

//            ptr = ft_strnstr(largestring, smallstring,9);
//            printf("%s",ptr);
// }