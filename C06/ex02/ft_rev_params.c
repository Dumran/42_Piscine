/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehkekli <mehkekli@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 13:55:55 by mehkekli          #+#    #+#             */
/*   Updated: 2023/07/24 13:55:59 by mehkekli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write (1, &a, 1);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac >= 1)
	{
		i = ac -1;
		while (i > 0)
		{
			j = 0;
			while (av[i][j])
			{
				ft_putchar (av[i][j]);
				j++;
			}
			i--;
			ft_putchar('\n');
		}
	}
	return (0);
}
