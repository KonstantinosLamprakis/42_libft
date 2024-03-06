/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:10:07 by klamprak          #+#    #+#             */
/*   Updated: 2024/03/06 14:23:44 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	res(const char *haystack, const char *needle, int *res, size_t len);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	result;

	if (needle[0] == '\0')
		return ((char *) haystack);
	res(haystack, needle, &result, len);
	if (result != -1)
		return ((char *)(haystack + result));
	return ((void *)0);
}

static void	res(const char *haystack, const char *needle, int *res, size_t len)
{
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	*res = -1;
	while (haystack[i] != '\0' && needle[j] != '\0' && i < len)
	{
		if (haystack[i] == needle[j])
		{
			if (*res == -1)
				*res = i;
			j++;
		}
		else
		{
			*res = -1;
			j = 0;
		}
		i++;
	}
	if (needle[j] != '\0')
		*res = -1;
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	*str = "Be the best version dude!";
// 	char	*to_find = "  ";
// 	char	*result;
// 	int		i = 10;

// 	result = strnstr(str, to_find, i);
// 	printf("%s\n", result);
// 	result = ft_strnstr(str, to_find, i);
// 	printf("%s", result);
// }
