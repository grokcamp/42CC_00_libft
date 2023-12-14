/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:56:47 by gcampbel          #+#    #+#             */
/*   Updated: 2023/12/11 19:59:33 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* finds the LAST instance of char <c> in str <s>
 * returns the char <c> where it was found in <s> */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = (ft_strlen(s) - 1);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)s + i);
		else
			i--;
	}
	return (0);
}
/*
int	main(void)
{
	char	*str;
	int	i;

	str = "stringaling";
	i = 'i';

	printf("%s\n", ft_strrchr(str, i));
}*/
