/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginfranc <ginfranc@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:30:00 by ginfranc          #+#    #+#             */
/*   Updated: 2025/04/16 14:15:06 by ginfranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../../Libft/libft.h"

void	test_ft_split(void)
{
	printf("Testing ft_split:\n");

	const char *desc = "\"Hello World 42\"";
	char str[] = "Hello World 42";
	char **result = ft_split(str, ' ');

	if (result && result[0] && result[1] && result[2] && !result[3])
	{
		if (strcmp(result[0], "Hello") == 0 && strcmp(result[1], "World") == 0 \
				&& strcmp(result[2], "42") == 0)
		{
			printf("✅ Passed: %s | Return: \"%s\", \"%s\", \"%s\"\n\n",\
					desc, result[0], result[1], result[2]);
		}
		else
			printf("❌ Failed: %s (split result mismatch)\n", desc);
	}
	else
	{
		printf("❌ Failed: %s (ft_split returned NULL or incorrect number of substrings)\n", desc);
	}

	int i = 0;
	while (result && result[i])
	{
		free(result[i]);
		i++;
	}
	free(result);
}

