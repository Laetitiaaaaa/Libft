/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llejeune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 07:39:21 by llejeune          #+#    #+#             */
/*   Updated: 2018/11/14 10:55:32 by llejeune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <ctype.h>

int		main(int argc, char **argv)
{
//	char s1[50] = "je suis une pomme";
//	char s11[50] = "je suis une pomme";

	argc = 2;
	printf("%d\n", ft_isprint(atoi(argv[1])));
	printf("%d\n", isprint(atoi(argv[1])));
	return (0);
}
