/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-den <dvan-den@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 01:33:44 by dvan-den          #+#    #+#             */
/*   Updated: 2024/01/28 01:33:44 by dvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char    rotone(char c)
{
    if (c >= 'A' && c <= 'Z' )
    {
        int tmp = c + 1;
        if (tmp > 'Z')
            return (tmp - 26);
        return (tmp);
    }
    else if (c >= 'a' && c <= 'z')
    {
        int tmp = c + 1;
        if (tmp > 'z')
            return (tmp - 26);
        return (tmp);
    }
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
    while (argv[1][i])
    {
        char tmp = rotone(argv[1][i]);
        write(1, &tmp, 1);
        i++;
    }
    write(1, "\n", 1);
    return (0);
}