/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llejeune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 07:39:21 by llejeune          #+#    #+#             */
/*   Updated: 2018/11/20 15:32:01 by llejeune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <ctype.h>

/*void	ft_puttab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i] != NULL)
		printf("%s\n", tab[i++]);
	printf("%s\n", tab[i]);
}*/

int		main(int argc, char **argv)
{
//	(void)argv;
//	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
//	char buff1[0xF00] = "there is no stars in the sky";
//	char buff2[0xF00] = "there is no stars in the sky";
//	size_t max = ft_strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
	argc = 4;
//	char s2[4] = "";

//	ft_puttab(ft_strsplit(argv[1], argv[2][0]));
//	printf("%lu\n", ft_strlcat(s2, "thx to ntoniolo for this test !", 4));
//	printf("%lu\n", strlcat(s1, "thx to ntoniolo for this test !", 4));
//	printf("%s\n", s2);
	printf("%s\n", ft_strjoin(argv[1], argv[2]));
//	printf("%d\n", ft_strlen(ft_strnew(atoi(argv[1]))));
	return (0);
}
