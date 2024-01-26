/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-den <dvan-den@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 12:18:45 by dvan-den          #+#    #+#             */
/*   Updated: 2024/01/26 12:18:45 by dvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int is_space(char c)
{
    if (c == 9 || c == 32)
        return (1);
    return (0);
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

char    *first_word(char *str)
{
    int     i;

    i = 0;
    while (str[i] && is_space(str[i]))
        i++;
    while (str[i] && !is_space(str[i]))
    {
        ft_putchar(str[i]);
        i++;
    }
    ft_putchar('\n');
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        ft_putchar('\n');
        return (0);
    } 
    first_word(argv[1]);
    return (0);
}