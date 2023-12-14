/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 21:10:57 by gcampbel          #+#    #+#             */
/*   Updated: 2023/12/14 22:25:42 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* allocates with malloc, returns an array of strings obtained
 * by splitting <s> with char <c> as a delimiter -- array must
 * end with a NULL pointer, returns NULL on malloc fail */

/* I didn't cover `split` in the piscine, so this is a learning
 * experience with many statics involved -- if <c> is a delimiter, 
 * meaning it separates "words" in the str <s> provided, then I'll
 * need a function to count how many words are in the original <s>,
 * in order to malloc the return value **char, then create a str for
 * each word and ultimately combine them into the new return array */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	
}

static size_t	ft_wordcount(char const *str, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
			if (str[i] == '\0')
				return (count);
		}
		i++;
	}
	return (count);
}

static size_t	ft_wordlen(char const *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static void	ft_dump(size_t i, char **strs)
{
	while (i > 0)
	{
		i--;
		free(strs[i]);
	}
	free(strs);
}


