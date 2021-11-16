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

char *strdup(const char *s)
{
    t_size i;
    char *dst;

    i = ft_strlen((char) s);
    dst = malloc(i);
    if(dest)
        ft_strlcpy(dst, (char) s, i);
    return (dest);
}