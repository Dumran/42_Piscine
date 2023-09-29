/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aergin <aergin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:30:50 by aergin            #+#    #+#             */
/*   Updated: 2023/07/17 16:30:51 by aergin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	func(int x, int y, int a, int b)
{
	if ((b == 1 && a == 1) || (b == y && a == x && a != 1 && b != 1))
		ft_putchar('A');
	else if ((a == 1 && b == y) || (b == 1 && a == x))
		ft_putchar('C');
	else if (a == x || b == y || a == 1 || b == 1)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	a;
	int	b;

	if (x > 0 && y > 0)
	{
		b = 1;
		while (b <= y)
		{
			a = 1;
			while (a <= x)
			{
				func(x, y, a, b);
				a++;
			}
			ft_putchar('\n');
			b++;
		}
	}
	else
		write(1, "Error! Invalid input.\n", 23);
}
