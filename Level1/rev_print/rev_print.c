/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-den <dvan-den@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 01:04:09 by dvan-den          #+#    #+#             */
/*   Updated: 2024/01/28 01:04:09 by dvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <unistd.h>

size_t  ft_strlen(char *str)
{
    size_t i = 0;
    while (str[i])
        i++;
    return (i);
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    char *str = argv[1];
    size_t size = ft_strlen(str);
    int i = size - 1;
    while (str[i])
    {
        write(1, &str[i], 1);
        i--;
    }
    write(1, "\n", 1);
    return (0);
}