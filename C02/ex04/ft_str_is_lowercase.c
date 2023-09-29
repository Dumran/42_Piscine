/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehkekli <mehkekli@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 20:44:10 by mehkekli          #+#    #+#             */
/*   Updated: 2023/07/17 20:44:13 by mehkekli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
		return (1);
	else
	{
		while (*str)
		{
			if (! (*str >= 'a' && *str <= 'z'))
				return (0);
			str++;
		}
		return (1);
	}
}
