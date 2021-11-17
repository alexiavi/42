/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 09:39:10 by marvin            #+#    #+#             */
/*   Updated: 2021/11/16 09:39:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

char	*strdup(const char *s)
{
	size_t	i;
	char	*dst;

	i = ft_strlen((char *) s);
	dst = malloc(i);
	if (dst)
		ft_strlcpy(dst, (char *) s, i);
	return (dst);
}
