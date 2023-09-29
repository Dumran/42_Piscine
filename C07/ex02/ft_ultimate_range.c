/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehkekli <mehkekli@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 09:14:01 by mehkekli          #+#    #+#             */
/*   Updated: 2023/07/26 09:14:14 by mehkekli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	len = max - min;
	range[0] = (int *)malloc(len * sizeof(int) + 1);
	if (!*range)
		return (-1);
	while (min < max)
	{
		range[0][i] = min ;
		min++;
		i++;
	}
	return (len);
}
