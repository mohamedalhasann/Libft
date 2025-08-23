/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhassa <malhassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 23:37:31 by malhassa          #+#    #+#             */
/*   Updated: 2025/08/21 23:49:12 by malhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void    ft_putendl_fd(char *s, int fd)
{
      char c;
    
      c = '\n';
    ft_putstr_fd(s,fd);
    write(1,&c,1);
}

int main(void)
{
    ft_putendl_fd("mohamed",1);    
}