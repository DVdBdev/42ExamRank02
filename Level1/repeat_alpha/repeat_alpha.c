/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-den <dvan-den@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 19:34:26 by dvan-den          #+#    #+#             */
/*   Updated: 2024/01/27 19:34:26 by dvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int give_index(char c)
{
    if (c > 96 && c < 123)
        return (c - 96);
    else if (c > 64 && c < 91)
        return (c - 64);
    else
        return (1);
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
        
    char *str = argv[1];
    int i = 0;
    while (str[i])
    {
        int j = 0;
        int c = str[i];
        int index = give_index(c);
        while (j < index)
        {
            ft_putchar(c);
            j++;
        }
        i++;
    }
    write(1, "\n", 1);
    return (0);
}