/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehkekli <mehkekli@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 11:45:41 by mehkekli          #+#    #+#             */
/*   Updated: 2023/07/30 11:45:43 by mehkekli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	hex(unsigned char a)
{
	char	*arr;

	arr = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(arr[a / 16]);
	ft_putchar(arr[a % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] < 32 || str[i] > 126))
		{
			ft_putchar(str[i]);
		}
		else
		{
			hex(str[i]);
		}
		i++;
	}
}
