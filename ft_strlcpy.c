/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 10:26:52 by klamprak          #+#    #+#             */
/*   Updated: 2024/03/06 10:53:22 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_n;

	i = 0;
	src_n = 0;
	while (src[src_n] != '\0')
	{
		++src_n;
	}
	if (dstsize <= 0)
		return (src_n);
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_n);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char dest[10] = "";
// 	char src[] = "test23452dsfgß34";
// 	int	a = 3;
// 	printf("%s - %zd\n", dest, ft_strlcpy(dest, src, a));
// 	printf("%s - %zd - %d\n", dest, ft_strlcpy(dest, src, a),
// snprintf(dest, a, src));
// }
