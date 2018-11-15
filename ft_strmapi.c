/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llejeune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 12:39:31 by llejeune          #+#    #+#             */
/*   Updated: 2018/11/15 13:47:43 by llejeune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*tab;

	i = 0;
	tab = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	while (s[i] != 0)
	{
		tab[i] = f(i, s);
		i++;
	}
	tab[i] = 0;
	return (tab);
}
