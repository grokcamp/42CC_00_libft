/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 00:10:21 by gcampbel          #+#    #+#             */
/*   Updated: 2023/12/11 19:57:24 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* compares the first <n> chars of str <s1> and str <s2>
 * returns the difference of <s1> - <s2> */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	int	out;

	out = ft_strncmp("string", "stsing", 3);
	printf("%d\n", out);
}
*/
