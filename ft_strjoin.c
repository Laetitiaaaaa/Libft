/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llejeune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 14:18:38 by llejeune          #+#    #+#             */
/*   Updated: 2018/11/20 15:31:01 by llejeune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tab;
	int		i;

	if (s1 == 0 || s2 == 0)
		return (NULL);
	i = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	if (!(tab = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	tab = ft_strcat((char *)s1, (char *)s2);
	return (tab);
}
