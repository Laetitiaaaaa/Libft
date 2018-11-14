/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llejeune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 16:06:13 by llejeune          #+#    #+#             */
/*   Updated: 2018/11/12 16:24:59 by llejeune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlen(const char *str);

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = ft_strlen(src);
	j = ft_strlen(dst);
	k = 0;
	if (size < j)
		k = i + size;
	else
		k = i + j;
	return (k);
}
