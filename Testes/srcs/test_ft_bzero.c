/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginfranc <ginfranc@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 09:25:02 by ginfranc          #+#    #+#             */
/*   Updated: 2025/04/16 11:32:47 by ginfranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../../Libft/libft.h"

void test_ft_bzero(void)
{
	printf("Testing ft_bzero:\n");

	const char	*s = "Hello, World!"; 
	char s1[] = "Hello, World!";
	char s2[] = "Hello, World!";
	bzero(s1, 13);
	ft_bzero(s2, 13);

	if (memcmp(s1, s2, 13) == 0)
		printf("✅ Passed: \"%s\" | Return: \"%s\"\n\n", s, s2);
	else
	printf("❌ Failed: \"%s\" (Expected %s, got %s)\n", s, s1, s2);
}

