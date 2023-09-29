/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehkekli <mehkekli@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 09:14:09 by mehkekli          #+#    #+#             */
/*   Updated: 2023/07/26 09:14:12 by mehkekli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	sayac(int size, char **str, char *s)
{
	int	i;
	int	a;
	int	b;

	i = 0;
	a = 0;
	while (a < size)
	{
		b = 0; 
		while (str[a][b] != '\0')
		{
			b++;
			i++;
		}
		a++;
	}
	b = 0;
	while (s[b] != '\0')
		b++;
	return (i + ((a - 1) * b));
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		i1;
	int		i2;
	int		c;

	s = (char *)malloc(sizeof(char) * sayac(size, strs, sep) + 1);
	i1 = 0;
	c = 0;
	while (i1 < size)
	{
		i2 = 0;
		while (strs[i1][i2] != '\0')
			s[c++] = strs[i1][i2++];
		i2 = 0;
		while (sep[i2] != '\0' && i1 != size - 1)
			s[c++] = sep[i2++];
		i1++;
	}
	s[c] = '\0';
	return (s);
}
