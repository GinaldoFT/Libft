/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginfranc <ginfranc@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 11:45:00 by ginfranc          #+#    #+#             */
/*   Updated: 2025/04/16 12:07:30 by ginfranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../../Libft/libft.h"

void	test_ft_memset(void)
{
	printf("Testing ft_memset:\n");

	char	*s1 = "xxxxx";
	char	buffer1[6] = "xxxxx";
	char	buffer2[6] = "xxxxx";

	memset(buffer1, 'A', 5);
	ft_memset(buffer2, 'A', 5);

	if (memcmp(buffer1, buffer2, 5) == 0)
		printf("✅ Passed: \"%s\" Char: \"A\"| Return: \"%s\"\n\n", s1, buffer2);
	else
		printf("❌ Failed: \"%s\" (expected: \"%s\", got: \"%s\")\n", s1, buffer1, buffer2);
}

