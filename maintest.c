/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llejeune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 07:39:21 by llejeune          #+#    #+#             */
/*   Updated: 2018/11/14 09:06:46 by llejeune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		main(int argc, char **argv)
{
//	char s1[50] = "je suis une pomme";
//	char s11[50] = "je suis une pomme";

	argc = 3;
	printf("%s\n", ft_strrchr(argv[1], atoi(argv[2])));
	printf("%s\n", strrchr(argv[1], atoi(argv[2])));
	return (0);
}
