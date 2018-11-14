/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llejeune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 16:26:17 by llejeune          #+#    #+#             */
/*   Updated: 2018/11/12 16:27:00 by llejeune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	size_t i;

	i = 0;
	while (src[i] != 0 && i < len)
	{
		dest[i] = src[i];
		i++;
	}
	while (src[i] != 0)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}
