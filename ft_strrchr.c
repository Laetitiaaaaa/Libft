/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llejeune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 11:23:27 by llejeune          #+#    #+#             */
/*   Updated: 2018/11/14 09:09:26 by llejeune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;

	len = ft_strlen(s);
	if (c == 0)
		return ((char *)&s[len]);
	while (s[len] != s[0])
	{
		if (s[len] == c)
			return ((char *)&s[len]);
		len--;
	}
	if (s[0] == c)
		return ((char *)&s[0]);
	return (NULL);
}
