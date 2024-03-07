/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 09:10:42 by klamprak          #+#    #+#             */
/*   Updated: 2024/03/07 12:38:58 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	positive_itoa(int n, char *result, int i);

char	*ft_itoa(int n)
{
	char	*result;
	int		i;

	result = malloc(12 * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	if (n == -2147483648)
	{
		result[0] = '-';
		result[1] = '2';
		i += 2;
		n = 147483648;
	}
	if (n < 0)
	{
		result[i++] = '-';
		n = -n;
	}
	positive_itoa(n, result, i);
	return (result);
}

static void	positive_itoa(int n, char *result, int i)
{
	int		div;
	int		temp_num;

	temp_num = n;
	div = 1;
	while (temp_num / 10 != 0)
	{
		temp_num /= 10;
		div *= 10;
	}
	while (div >= 1)
	{
		result[i++] = '0' + (n / div);
		n %= div;
		div /= 10;
	}
	result[i++] = '\0';
}

// #include <stdio.h>
// int	main(void)
// {
// 	puts(ft_itoa(-2147483648));
// }
