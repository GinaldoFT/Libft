/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putendl_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginfranc <ginfranc@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:50:10 by ginfranc          #+#    #+#             */
/*   Updated: 2025/04/16 13:56:08 by ginfranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "../../Libft/libft.h"

void	test_ft_putendl_fd(void)
{
	printf("Testing ft_putendl_fd:\n");

	const char *desc = "\"Hello\"\\n";
	int	fd = open("test_output.txt", O_RDWR | O_CREAT | O_TRUNC, 0644);

	if (fd < 0)
	{
		printf("❌ Err: %s (could not open file)\n", desc);
		return;
	}

	ft_putendl_fd("Hello", fd);
	lseek(fd, 0, SEEK_SET);

	char buffer[16] = {0};
	read(fd, buffer, 16);

	if (strcmp(buffer, "Hello\n") == 0)
		printf("✅ Passed: %s | Return: \"%s\"\n\n", desc, buffer);
	else
		printf("❌ Failed: %s (expected: \"Hello\\n\", got: \"%s\")\n", desc, buffer);

	close(fd);
	remove("test_output.txt");
}

