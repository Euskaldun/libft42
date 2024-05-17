/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantia <josantia@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:31:51 by josantia          #+#    #+#             */
/*   Updated: 2024/04/17 19:56:03 by josantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*srt1;
	unsigned char	*srt2;
	size_t			i;

	srt1 = (unsigned char *)s1;
	srt2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (srt1[i] != srt2[i])
			return (srt1[i] - srt2[i]);
		i++;
	}
	return (0);
}
