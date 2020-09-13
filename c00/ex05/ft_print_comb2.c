/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-hol <jvan-hol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 08:39:48 by jvan-hol          #+#    #+#             */
/*   Updated: 2020/09/12 08:49:46 by jvan-hol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_comb(void)
{
    int a = '0';
    int b = '1';
    int c = '2';

    while(a != b && a != c && b != c){
        while(a <= 9){
            while(b <= 9){
                while(c <= 9){
                    write(1, &a, 1);
                    write(1, &b, 1);
                    write(1, &c, 1);
                    write(1, ", ", 1);
                    ++a;
                    ++b;
                    ++c;
                }
            }
        }
    }
}

int main(void)
{
    ft_print_comb();
    return(0);
}