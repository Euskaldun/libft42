/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantia <josantia@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:05:42 by josantia          #+#    #+#             */
/*   Updated: 2024/04/16 19:13:06 by josantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_wd(char const *s, char c);
int		ft_len_wd(char const *s, char c);
char	**ft_free_split(char **s, int max);

char	**ft_split(char const *s, char c)
{
	char	**ret;	
	int		wd_cont;
	int		i;

	if (!s)
		return (NULL);
	wd_cont = ft_count_wd(s, c);
	i = 0;
	ret = (char **) malloc (sizeof(*ret) * (ft_count_wd(s, c) + 1));
	if (!ret)
		return (NULL);
	while (i < wd_cont)
	{
		while (*s != '\0' && *s == c)
			s++;
		ret[i] = ft_substr(s, 0, ft_len_wd(s, c));
		if (ret[i] == NULL)
			return (ft_free_split(ret, i - 1));
		s = s + ft_len_wd(s, c);
		i++;
	}
	ret[i] = NULL;
	return (ret);
}

int	ft_count_wd(char const *s, char c)
{
	int	ret;

	ret = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			ret++;
			while (*s != '\0' && *s != c)
				s++;
		}
		else
			s++;
	}
	return (ret);
}

int	ft_len_wd(char const *s, char c)
{
	int	ret;

	ret = 0;
	while (*s != '\0' && *s != c)
	{
		ret++;
		s++;
	}
	return (ret);
}

char	**ft_free_split(char **s, int max)
{
	while (max >= 0)
	{
		free(s[max]);
		max--;
	}
	free (s);
	return (NULL);
}
