/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 09:44:49 by marvin            #+#    #+#             */
/*   Updated: 2021/11/16 09:44:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * strnstr(const char * s1, const char * s2, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    while((char) s1[i] && i < len)
    {
        if((char) s1[i] == (char) s2[j++])
        {
            if (!(char) s2[j])
                return ((char) s2 + j - ft_strlen(s2));
        }
        else
            j = 0;
        i++;
    }
}