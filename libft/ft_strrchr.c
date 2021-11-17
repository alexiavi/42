/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 09:21:58 by marvin            #+#    #+#             */
/*   Updated: 2021/11/16 09:21:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	char	*rtn;

	ptr = (char *)s;
	while (*ptr)
	{
		if (*ptr == c)
			rtn = ptr;
		ptr++;
	}
	return (rtn);
}
