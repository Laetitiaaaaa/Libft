/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llejeune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 08:49:03 by llejeune          #+#    #+#             */
/*   Updated: 2018/11/12 16:28:21 by llejeune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

char		*ft_strdup(const char *s1)
{
	int		i;
	char	*tab;
	int		taille;

	i = 0;
	taille = ft_strlen(s1);
	if (!(tab = (char *)malloc(sizeof(char) * (taille + 1))))
		return (0);
	while (s1[i] != 0)
	{
		tab[i] = s1[i];
		i++;
	}
	tab[i] = 0;
	return (tab);
}
