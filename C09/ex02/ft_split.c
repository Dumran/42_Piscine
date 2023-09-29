/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehkekli <mehkekli@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 17:57:49 by mehkekli          #+#    #+#             */
/*   Updated: 2023/08/02 17:57:52 by mehkekli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_is_space(char to_find, char *str)
{
	while (*str)
	{
		if (to_find == *str++)
			return (1);
	}
	return (0);
}

int	ft_wordcount(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && (ft_is_space(*str, charset)))
			str++;
		if (*str && !(ft_is_space(*str, charset)))
		{
			count++;
			while (*str && !(ft_is_space(*str, charset)))
				str++;
		}
	}
	return (count);
}

int	ft_wordlen(char *str, char *charset)
{
	int	len;

	len = 0;
	while (ft_is_space(*str, charset))
		str++;
	while (*str && !(ft_is_space(*str, charset)))
	{
		str++;
		len++;
	}
	return (len);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**arr;
	int		words;

	words = ft_wordcount(str, charset);
	i = 0;
	arr = (char **)malloc(sizeof(char *) * (words + 1));
	if (!str || (arr == NULL))
		return (NULL);
	while (i < words)
	{
		arr[i] = (char *)malloc(sizeof(char) * (ft_wordlen(str, charset) + 1));
		if (arr == NULL)
			return (NULL);
		j = 0;
		while (ft_is_space(*str, charset))
			str++;
		while (*str && !(ft_is_space(*str, charset)))
			arr[i][j++] = *str++;
		arr[i][j] = '\0';
		i++;
	}
	arr[i] = NULL;
	return (arr);
}
