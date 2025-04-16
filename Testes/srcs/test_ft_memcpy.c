/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginfranc <ginfranc@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 11:41:00 by ginfranc          #+#    #+#             */
/*   Updated: 2025/04/16 11:41:53 by ginfranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../../Libft/libft.h"

void	test_ft_memcpy(void)
{
	printf("Testing ft_memcpy:\n");

	char	src[] = "12345";
	char	dst1[6] = "XXXXX";
	char	dst2[6] = "XXXXX";

	memcpy(dst1, src, 5);
	ft_memcpy(dst2, src, 5);

	if (memcmp(dst1, dst2, 5) == 0)
		printf("✅ Passed: \"%s\" | Return: \"%s\"\n\n", src, dst2);
	else
		printf("❌ Failed: \"%s\" (expected: \"%s\", got: \"%s\")\n", src, dst1, dst2);
}

