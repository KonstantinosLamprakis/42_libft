/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:28:25 by klamprak          #+#    #+#             */
/*   Updated: 2024/03/06 11:51:34 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)(&s[i]));
		i++;
	}
	if (c == s[i])
		return ((char *)(&s[i]));
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int main() {
// 	const char *str = "Hello, World!";
// 	char sch = 'a';
// 	char *result = ft_strchr(str, sch);
// 	if (result)
// 		printf("Character '%c' found at position %ld\n", sch, result - str);
// 	else
// 		printf("Character '%c' not found in the string.\n", sch);
// }
