/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehkekli <mehkekli@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 20:44:43 by mehkekli          #+#    #+#             */
/*   Updated: 2023/07/17 20:44:52 by mehkekli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
		return (1);
	else
	{
		while (*str)
		{
			if (!(*str >= 'A' && *str <= 'Z'))
			{
				return (0);
			}
			str++;
		}
		return (1);
	}
}
