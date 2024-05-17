/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantia <josantia@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 18:44:12 by josantia          #+#    #+#             */
/*   Updated: 2024/04/16 20:30:13 by josantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_int_len(long n);

char	*ft_itoa(int n)
{
	char	*ret;
	int		len;
	long	num;

	num = n;
	len = ft_int_len(num);
	ret = (char *)malloc (sizeof(char) * (len + 1));
	if (!ret)
		return (NULL);
	ret[len] = '\0';
	if (num == 0)
		ret[0] = '0';
	if (num < 0)
	{
		ret[0] = '-';
		num = -num;
	}
	while (num)
	{
		len--;
		ret[len] = (num % 10) + '0';
		num = num / 10;
	}
	return (ret);
}

int	ft_int_len(long n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n = -n;
		count++;
	}
	if (n > 9)
	{
		while (n)
		{
			n = n / 10;
			count++;
		}
	}
	else
		count++;
	return (count);
}
