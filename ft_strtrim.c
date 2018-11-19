/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llejeune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 14:41:59 by llejeune          #+#    #+#             */
/*   Updated: 2018/11/15 15:10:18 by llejeune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	char	*tab;

	i = 0;
	j = 0;
	tab = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (tab == 0)
		return (NULL);
	while (s[i] != 0)
	{
		while (s[i] == 32 || s[i] == 9 || s[i] == 13)
		{
			if (s[i + 1] != 0)
				i++;
		}
		tab[j] = s[i];
		i++;
		j++;
	}
	tab[j] = 0;
	return (tab);
}
