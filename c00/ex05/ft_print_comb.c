/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 08:18:04 by marvin            #+#    #+#             */
/*   Updated: 2025/02/21 08:18:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_print_comb()
{
    char num1 = '0';
    char num2 = '1';
    char num3 = '2';
    char comma = ',';
    char space = ' ';

    while (num1 <= '7')
    {
        while (num2 <= '8')
        {
            while (num3 <= '9')
            {
                write(1, &num1, 1);
                write(1, &num2, 1);
                write(1, &num3, 1);
                if (!(num1 == '7' && num2 == '8' && num3 == '9'))
                {
                    write(1, &comma, 1);
                    write(1, &space, 1);
                }
                num3++;
            }
            num3 = num2 + 2; // num3'ü sıfırla
            num2++;          // num2'yi artır
        }
        num1++;
        num2 = num1 + 1;
        num3 = num2 + 1;
    }
}

void main()
{
    ft_print_comb();
}
