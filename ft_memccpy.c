/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llejeune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 15:06:53 by llejeune          #+#    #+#             */
/*   Updated: 2018/11/15 07:57:06 by llejeune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst,
		const void *restrict src, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (((char *)src)[i] == (unsigned char)c)
		{
			i = 0;
			while (((char *)src)[i] != (unsigned char)(c + 1))
			{
				((char *)dst)[i] = ((char *)src)[i];
				i++;
			}
			return (&dst[i]);
		}
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (NULL);
}
