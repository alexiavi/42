/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicent <alvicent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:21:59 by alvicent          #+#    #+#             */
/*   Updated: 2021/11/16 17:29:50 by alvicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list	*ft_lstnew(void *content)
{
	t_list	*ret;

	(*ret).content = malloc (ft_str_len ((char *)content));
	if ((*ret).content)
	{
		(*ret).content = content;
		(*ret).next = NULL;
	}
	return (ret);
}
s