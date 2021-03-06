/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-hol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 08:24:18 by jvan-hol          #+#    #+#             */
/*   Updated: 2020/09/11 09:16:23 by jvan-hol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int a = '0';
	int b = '1';
	int c = '2';

	while(a <= '9'){
		while(b <='9'){
			while(c <='9'){
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

int		main(void)
{
	ft_print_comb();
	return (0);
}
