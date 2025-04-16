/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putchar_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginfranc <ginfranc@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:15:09 by ginfranc          #+#    #+#             */
/*   Updated: 2025/04/16 13:56:30 by ginfranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "../../Libft/libft.h"

void	test_ft_putchar_fd(void)
{
	printf("Testing ft_putchar_fd:\n");

	const char *desc = "'Z'";

	int fd = open("test_output.txt", O_RDWR | O_CREAT | O_TRUNC, 0644);
	if (fd < 0)
	{
		printf("❌ Err: %s (could not open file)\n", desc);
		return;
	}

	ft_putchar_fd('Z', fd);
	lseek(fd, 0, SEEK_SET);

	char buffer[2] = {0};
	read(fd, buffer, 1);

	if (buffer[0] == 'Z')
		printf("✅ Passed: %s | Return: '%c'\n\n", desc, buffer[0]);
	else
		printf("❌ Failed: %s (expected 'Z', got '%c')\n", desc, buffer[0]);

	close(fd);
	remove("test_output.txt");
}

