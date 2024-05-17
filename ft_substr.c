/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantia <josantia@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 18:25:25 by josantia          #+#    #+#             */
/*   Updated: 2024/04/15 17:09:09 by josantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
	{
		len = 0;
		start = 0;
	}
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	ret = (char *)malloc (sizeof(char) * (len + 1));
	if (!ret)
		return (NULL);
	while (s[start] != '\0' && i < len)
	{
		ret[i] = s[start];
		start++;
		i++;
	}
	ret[i] = 0;
	return (ret);
}
