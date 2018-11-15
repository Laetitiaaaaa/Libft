/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llejeune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 12:24:50 by llejeune          #+#    #+#             */
/*   Updated: 2018/11/15 13:35:47 by llejeune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*tab;

	i = 0;
	tab = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	while (s[i] != 0)
	{
		tab[i] = f(s[i]);
		i++;
	}
	tab[i] = 0;
	return (tab);
}
