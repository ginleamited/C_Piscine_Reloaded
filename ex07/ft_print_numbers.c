/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jilin <jilin@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 21:57:51 by jilin             #+#    #+#             */
/*   Updated: 2024/10/12 23:43:37 by jilin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_print_numbers(void)
{
    int number = 0;

    while (number <= 9)
    {
        ft_putchar(number + 48);
        number++;
    }
}
/*
int main(void)
{
    ft_print_numbers();
}
*/