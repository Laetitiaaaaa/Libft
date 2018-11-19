/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llejeune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 07:39:21 by llejeune          #+#    #+#             */
/*   Updated: 2018/11/19 14:01:37 by llejeune         ###   ########.fr       */
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
//	char s1[50] = "je suis une pomme";
//	char s11[50] = "je suis une pomme";
	argc = 5;

//	ft_puttab(ft_strsplit(argv[1], argv[2][0]));
//	printf("%s\n", ft_memccpy(argv[1], argv[2], atoi(argv[3]), atoi(argv[4])));
	printf("%s\n", memccpy(argv[1], argv[2], atoi(argv[3]), atoi(argv[4])));

	return (0);
}
