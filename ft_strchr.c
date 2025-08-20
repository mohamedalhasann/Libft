/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhassa <malhassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 11:39:06 by malhassa          #+#    #+#             */
/*   Updated: 2025/08/17 15:04:31 by malhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *)s;
	while (ptr[i])
	{
		if (ptr[i] == c)
			return (ptr + i);
		i++;
	}
	if (ptr[i] == c)
		return (ptr + i);
	return (NULL);
}
// int main()
// {
//     // define a string
//     const char* str = "GeeksforGdeks";
//     // define a char ch to be searched in str
//     char ch = 'd';

//     // Use strchr to find the first occurrence of the
//     // character 's'
//     const char* result = ft_strchr(str, ch);

//    printf("%s",result);

//     return (0);
// }