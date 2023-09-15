/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egurasla <egurasla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 16:43:30 by egurasla          #+#    #+#             */
/*   Updated: 2023/08/02 17:22:54 by egurasla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			a;
	unsigned char	*dest;

	dest = (unsigned char *)b;
	a = 0;
	while (a < len)
	{
		dest[a] = (unsigned char)c;
		a++;
	}
	return (dest);
}
