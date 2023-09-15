/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egurasla <egurasla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 14:27:34 by egurasla          #+#    #+#             */
/*   Updated: 2023/08/02 15:52:07 by egurasla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*result;

	i = ft_strlen(s);
	result = (char *)s;
	while (i >= 0)
	{
		if (result[i] == (char)c)
		{
			return (&result[i]);
		}
		i--;
	}
	return (0);
}
