/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehkekli <mehkekli@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 01:39:57 by mehkekli          #+#    #+#             */
/*   Updated: 2023/07/26 09:14:15 by mehkekli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	i;
	int	*a;

	if (min >= max)
	{
		return (a = NULL);
	}
	range = max - min;
	a = (int *)malloc(range * sizeof(int) + 1);
	if (!a)
		return (0);
	i = 0;
	while (min < max)
	{
		a[i] = min ;
		min++;
		i++;
	}
	return (a);
}
