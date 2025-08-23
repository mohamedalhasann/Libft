/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhassa <malhassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 13:40:39 by malhassa          #+#    #+#             */
/*   Updated: 2025/08/22 22:12:14 by malhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int    countwords(char const *s , char c)
{
    int j;

    j = 0;
    while (*(char *)s)
    {
     if (*(char *)s == c)
        j++;
    s++;
    }
    return (j + 1);
}

int lentillfound(char const *s,char c)
{
    int i;

    i = 0;
    while (s[i] && s[i] != c)
        i++;
    return (i);
}

char    *wordspliter(char const *s,char c)
{
    char    *ptr;
    int i;

    i = 0;
    ptr = (char *)malloc(lentillfound(s,c)+ 1);
    while (s[i] && s[i] != c)
    {
        ptr[i] = s[i];
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}
// //hello mohamed in our world
char **ft_split(char const *s, char c)
{
    char    **largeptr;
    char *ptr;
    int k;
    int i;
    int j;

    ptr = (char *)s;
    largeptr = malloc((countwords(s,c) + 1)*sizeof(char *));
    k = 0;
    i = 0;
    j = 0;
    while (ptr[k])
    {
        while (ptr[k] && ptr[k] == c)
            k++;
        if(ptr[k] != c && ptr[k])
        {
        largeptr[j] = wordspliter(ptr + k,c);
        j++;
        }
        while(ptr[k] && ptr[k] != c)
            k++;
    }
    
    largeptr[j] = NULL;
    return (largeptr);
}


void print_split(char **arr) {
    int i = 0;

    if (arr == NULL) {
        printf("NULL\n");
        return;
    }

    while (arr[i] != NULL) {
        printf("[%s]\n", arr[i]);  
        i++;
    }
    printf("----\n");
}


int main(void) {
    char **result;

    result = ft_split(":", ':');
    print_split(result);

    result = ft_split("A", ':');
    print_split(result);

    result = ft_split("   split   this   string   ", ' ');
    print_split(result);

    result = ft_split("one,two,,,three,four,,", ',');
    print_split(result);

    result = ft_split("word1\tword2\t\tword3", '\t');
    print_split(result);

    result = ft_split("line1\nline2\nline3", '\n');
    print_split(result);
    

    return 0;
}
