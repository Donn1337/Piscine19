/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-hol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 10:08:37 by jvan-hol          #+#    #+#             */
/*   Updated: 2020/09/13 11:22:34 by jvan-hol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char *c);

void	ft_display_char(int a, int b, int y, int x)
{
	if (b == 1 || b == y)
	{
		if (a == 1 || a == x)
			ft_putchar("o");
		else
			ft_putchar("-");
	}
	else
	{
		if (a == 1 || a == x)
			ft_putchar("|");
		else
			ft_putchar(" ");
	}
}

void	rush(int x, int y)
{
	int nb1;
	int nb2;

	nb1 = 1;
	nb2 = 1;
	while (nb2 <= y)
	{
		nb1 = 1;
		while (nb1 <= x)
		{
			ft_display_char(nb1, nb2, y, x);
			nb1++;
		}
		ft_putchar("\n");
		nb2++;
	}
}
