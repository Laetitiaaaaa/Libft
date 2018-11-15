/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llejeune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 08:45:34 by llejeune          #+#    #+#             */
/*   Updated: 2018/11/15 10:14:55 by llejeune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	int		taille;
	int		j;

	i = 0;
	taille = ft_strlen(dst);
	j = 0;
	while (i < len)
	{
		((char *)dst)[j] = ((char *)src)[i];
		i++;
		j++;
	}
	if (taille == (int)len)
		((char *)dst)[j] = 0;
	if (taille < (int)len)
	{
		while ((int)i < ft_strlen(src))
		{
			((char *)dst)[j] = ((char *)src)[(int)i - (taille + 1)];
			i++;
			j++;
		}
	}
	return ((char *)dst);
}
