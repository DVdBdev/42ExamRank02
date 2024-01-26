/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-den <dvan-den@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:23:45 by dvan-den          #+#    #+#             */
/*   Updated: 2024/01/26 13:23:45 by dvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    fizz(void)
{
    write(1, "fizz", 4);
}

void    buzz(void)
{
    write(1, "buzz", 4);
}

void    fizzbuzz(void)
{
    write(1, "fizzbuzz", 8);
}

void    print_i(int i)
{
    char str[10] = "0123456789";
    if (i > 9)
        print_i(i / 10);
    write(1, &str[i % 10], 1);
}

int main(void)
{
    int i;

    i = 1;
    while (i < 101)
    {
        if (i % 15 == 0)
            fizzbuzz();
        else if (i % 5 == 0)
            buzz();
        else if (i % 3 == 0)
            fizz();
        else
            print_i(i);
        write(1, "\n", 1);
        i++;
    }
    return (0);
}