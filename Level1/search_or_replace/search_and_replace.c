/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-den <dvan-den@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 01:44:30 by dvan-den          #+#    #+#             */
/*   Updated: 2024/01/28 01:44:30 by dvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        write(1, "\n", 1);
        return (0);
    }
    int from_len = ft_strlen(argv[2]);
    int to_len = ft_strlen(argv[3]);
    if (from_len != 1 || to_len != 1)
    {
        write(1, "\n", 1);
        return (0);
    }
    char *str = argv[1];
    int i = 0;
    while (str[i])
    {
        if (str[i] == argv[2][0])
            write(1, &argv[3][0], 1);
        else
            write(1, &str[i], 1);
        i++;
    }
    write(1, "\n", 1);
    return (0);
}