/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantia <josantia@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:37:46 by josantia          #+#    #+#             */
/*   Updated: 2024/04/12 21:22:08 by josantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *s1)
{
	void	*ret;
	size_t	ln;

	ln = ft_strlen(s1) + 1;
	ret = malloc (sizeof(char) * ln);
	if (!ret)
		return (NULL);
	ft_strlcpy(ret, s1, ln);
	return (ret);
}
