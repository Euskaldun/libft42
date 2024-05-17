/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantia <josantia@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:02:53 by josantia          #+#    #+#             */
/*   Updated: 2024/04/12 23:12:26 by josantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;

	if (!s1 || !s2)
		return (NULL);
	ret = malloc (sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (!ret)
		return (NULL);
	ft_strlcpy(ret, s1, ft_strlen(s1) + 1);
	ft_strlcat(ret + ft_strlen(ret), s2, ft_strlen(s2) + 1);
	return (ret);
}
