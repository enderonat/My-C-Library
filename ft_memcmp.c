/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egurasla <egurasla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:18:09 by egurasla          #+#    #+#             */
/*   Updated: 2023/08/02 15:51:00 by egurasla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*k;
	const unsigned char	*l;

	i = 0;
	k = (const unsigned char *)s1;
	l = (const unsigned char *)s2;
	while (i < n)
	{
		if (k[i] != l[i])
		{
			return (k[i] - l[i]);
		}
		i++;
	}
	return (0);
}
