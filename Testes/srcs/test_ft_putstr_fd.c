/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putstr_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginfranc <ginfranc@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:14:00 by ginfranc          #+#    #+#             */
/*   Updated: 2025/04/16 14:04:31 by ginfranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "../../Libft/libft.h"

void	test_ft_putstr_fd(void)
{
	printf("Testing ft_putstr_fd:\n");

	const char *desc = "\"42 Porto\"";
	int		fd = open("test_output.txt", O_RDWR | O_CREAT | O_TRUNC, 0644);

	if (fd < 0)
	{
		printf("❌ Err: %s (could not open file)\n", desc);
		return;
	}

	ft_putstr_fd("42 Porto", fd);
	lseek(fd, 0, SEEK_SET);

	char buffer[16] = {0};
	read(fd, buffer, 16);

	if (strcmp(buffer, "42 Porto") == 0)
		printf("✅ Passed: %s | Return: \"%s\"\n\n", desc, buffer);
	else
		printf("❌ Failed: %s (expected: \"42 Porto\", got: \"%s\")\n", desc, buffer);

	close(fd);
	remove("test_output.txt");
}

