/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llejeune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 07:39:21 by llejeune          #+#    #+#             */
/*   Updated: 2018/11/15 13:52:44 by llejeune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <ctype.h>

int		main(int argc, char **argv)
{
//	char s1[50] = "je suis une pomme";
//	char s11[50] = "je suis une pomme";

	argc = 3;
	printf("%d\n", ft_strnequ(argv[1], argv[2], atoi(argv[3])));
//	printf("%zu\n", strlcat(argv[1], argv[2], atoi(argv[3])));

	return (0);
}
