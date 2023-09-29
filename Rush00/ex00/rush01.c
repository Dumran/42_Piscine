/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehkekli <mehkekli@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:30:22 by aergin            #+#    #+#             */
/*   Updated: 2023/09/29 14:13:13 by mehkekli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	func(int x, int y, int a, int b)
{
	if ((a == 1 && b == 1) || (a == x && b == y && a != 1 && b != 1))
		ft_putchar('/');
	else if ((a == 1 && b == y) || (b == 1 && a == x))
		ft_putchar('\\');
	else if (a == x || b == y || a == 1 || b == 1)
		ft_putchar('*');
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
