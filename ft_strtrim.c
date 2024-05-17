/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantia <josantia@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:13:21 by josantia          #+#    #+#             */
/*   Updated: 2024/04/15 19:27:35 by josantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_fnd_char(char const *src, char c);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*end;
	char	*ret;

	if (!set || !s1)
		return (NULL);
	start = (char *) s1;
	end = (char *) s1 + ft_strlen(s1);
	while (*start && ft_fnd_char(set, *start))
		start++;
	while (start < end && ft_fnd_char(set, *(end -1)))
		end--;
	ret = ft_substr(start, 0, end - start);
	return (ret);
}

int	ft_fnd_char(char const *src, char c)
{
	while (*src)
	{
		if (*src == c)
			return (1);
		src++;
	}
	return (0);
}
