/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 09:49:47 by marvin            #+#    #+#             */
/*   Updated: 2021/11/16 09:49:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *calloc(size_t nmemb, size_t size)
{
    void *p;

    p = malloc(nmemb * size);
    ft_memset(p, nmemb, size);
    return(p);
}