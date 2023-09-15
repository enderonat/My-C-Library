/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egurasla <egurasla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:18:24 by egurasla          #+#    #+#             */
/*   Updated: 2023/08/02 15:51:07 by egurasla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*sourc;
	size_t			i;

	sourc = (unsigned char *)src;
	dest = (unsigned char *)dst;
	i = 0;
	if (!dst && !src)
		return (0);
	if (dst < src)
	{
		while (len > i)
		{
			dest[i] = sourc[i];
			i++;
		}
	}
	else if (dst > src)
	{
		while (len--)
			dest[len] = sourc[len];
	}
	return (dest);
}
