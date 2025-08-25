/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhassa <malhassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 20:18:33 by malhassa          #+#    #+#             */
/*   Updated: 2025/08/24 20:28:22 by malhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;
	int		i;

	temp = lst;
	i = 0;
	while (i < ft_lstsize(lst) - 1)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}

// int main(void)
// {

//         t_list *head;
//     t_list *node1;
//     t_list *node2;
//     t_list *node3;

//     head = NULL;
//     node1 = ft_lstnew("firstwillappear");
//     node2 = ft_lstnew("second");
//     node3 = ft_lstnew("third");
//     ft_lstadd_front(&head,node1);
//     ft_lstadd_front(&head,node2);
//     ft_lstadd_front(&head,node3);
//     t_list *temp = ft_lstlast(head);
//         printf("%s\n",(char *)temp -> content);
// }