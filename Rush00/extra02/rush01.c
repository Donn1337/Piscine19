/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-hol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 10:41:23 by jvan-hol          #+#    #+#             */
/*   Updated: 2020/09/13 11:30:13 by jvan-hol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char *c);

void	ft_display_char(int a, int b, int y, int x)
{
	if (b == 1)
	{
		if (a == 1)
			ft_putchar("/");
		else if (a == x)
			ft_putchar("\\");
		else
			ft_putchar("*");
	}
	else if (b == y)
	{
		if (a == 1)
			ft_putchar("\\");
		else if (a == x)
			ft_putchar("/");
		else
			ft_putchar("*");
	}
	else
	{
		if (a == 1 || a == x)
			ft_putchar("*");
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
