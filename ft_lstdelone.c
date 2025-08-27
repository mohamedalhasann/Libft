/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhassa <malhassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 00:41:19 by malhassa          #+#    #+#             */
/*   Updated: 2025/08/27 00:46:40 by malhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ft_lstdelone implementation
void ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (!lst || !del)
        return;
    free(lst->content);
    free(lst);
}

// Helper to create a new node
t_list *ft_lstnew(void *content)
{
    t_list *node = malloc(sizeof(t_list));
    if (!node)
        return NULL;
    node->content = content;
    node->next = NULL;
    return node;
}

// Helper to print the list
void print_list(t_list *lst)
{
    while (lst)
    {
        printf("%s -> ", (char *)lst->content);
        lst = lst->next;
    }
    printf("NULL\n");
}

int main(void)
{
    // Create nodes
    t_list *node1 = ft_lstnew(strdup("Hello"));
    t_list *node2 = ft_lstnew(strdup("World"));
    t_list *node3 = ft_lstnew(strdup("42"));

    // Link nodes
    node1->next = node2;
    node2->next = node3;

    printf("Before deletion:\n");
    print_list(node1);

    // Delete node2 ("World")
    ft_lstdelone(node2, free);

    // Manually link node1 to node3 since node2 is deleted
    node1->next = node3;

    printf("After deletion of node2:\n");
    print_list(node1);

    // Free remaining nodes
    ft_lstdelone(node3, free);

    node1->next = NULL;
    print_list(node1);

    return 0;
}
