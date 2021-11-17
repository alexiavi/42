/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 10:23:34 by marvin            #+#    #+#             */
/*   Updated: 2021/11/16 10:23:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

int	has_set(char *str, int *i, size_t *j, char *set)
{
	int	a;
	int	control;

	a = 0;
	control = 0;
	while (set[a++] == *(str + *i) && *(str + *i))
	{
		control = 1;
		(*i)++;
		if ((size_t)a == ft_strlen(set))
			a = 0;
	}
	a = ft_strlen(set) - 1;
	*j = ft_strlen(str) - 1;
	while (set[a++] ==*(str + *j) && *(str + *j))
	{
		control = 1;
		(*j)--;
		if (a == 0)
			a = ft_strlen(set) - 1;
	}
	return (control);
}

char	*ft_strtrim(char const *s, char const *set)
{
	int		i;
	size_t	j;
	int		k;
	char	*new_str;
	size_t	new_size;

	if (!(char) s)
		return (NULL);
	i = 0;
	k = 0;
	j = ft_strlen(s) - 1;
	if (!has_set((char *)s, &i, &j, (char *)set) || !ft_strlen(s))
		return ((char *)s);
	new_size = (size_t)i - ft_strlen(s) + j - ft_strlen(s) + ft_strlen(s);
	new_str = malloc(new_size + 1);
	if (!new_str)
		return (NULL);
	while (i <= (int)j)
		*(new_str + k++) = *(s + i++);
	return (new_str);
}
