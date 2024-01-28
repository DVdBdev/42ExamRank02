/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-den <dvan-den@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 02:04:08 by dvan-den          #+#    #+#             */
/*   Updated: 2024/01/28 02:04:08 by dvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char    ulstr(char c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    else if (c >= 'A' && c <= 'Z')
        return (c + 32);
    else
        return (c);
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    int i = 0;
    char *str = argv[1];
    while (str[i])
    {
        char tmp = ulstr(str[i]);
        write(1, &tmp, 1);
        i++;
    }
    write(1, "\n", 1);
    return (0);
}