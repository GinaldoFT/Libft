/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putnbr_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginfranc <ginfranc@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:15:00 by ginfranc          #+#    #+#             */
/*   Updated: 2025/04/16 14:00:21 by ginfranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "../../Libft/libft.h"

void	test_ft_putnbr_fd(void)
{
	printf("Testing ft_putnbr_fd:\n");

	const char *desc = "-4242";
	int fd = open("test_output.txt", O_RDWR | O_CREAT | O_TRUNC, 0644);

	if (fd < 0)
	{
		printf("❌ Err: %s (could not open file)\n", desc);
		return;
	}

	ft_putnbr_fd(-4242, fd);
	lseek(fd, 0, SEEK_SET);

	char buffer[16] = {0};
	read(fd, buffer, 15);

	if (strcmp(buffer, "-4242") == 0)
		printf("✅ Passed: %s | Return: \"%s\"\n\n", desc, buffer);
	else
		printf("❌ Failed: %s (expected: \"-4242\", got: \"%s\")\n", desc, buffer);

	close(fd);
	remove("test_output.txt");
}

