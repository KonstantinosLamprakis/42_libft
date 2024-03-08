/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:41:33 by klamprak          #+#    #+#             */
/*   Updated: 2024/03/08 15:31:01 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*result;

	if ((int) len < 0)
		len = ft_strlen(s);
	if (start > ft_strlen(s) || len < 0)
	{
		result = malloc(1 * sizeof(char));
		if (!result)
			return (NULL);
		result[0] = '\0';
		return (result);
	}
	result = malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i + start] != '\0' && i < len)
	{
		result[i] = s[i + start];
		i++;
	}
	result[i] = '\0';
	return (result);
}

// #include <stdio.h>
// int	main(void)
// {
// 	// char const *s = "This is a test";
// 	// char *result = ft_substr(s, 5, 1);
// 	// char *result = ft_substr("hola", 0, 42949672951);
// 	char *result = ft_substr("hola", 0, 18446744073709551615);
// 	puts(result);
// }
