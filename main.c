/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epalomak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 12:52:54 by epalomak          #+#    #+#             */
/*   Updated: 2020/03/13 12:25:07 by epalomak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
///*
int		main(int argc, char **argv)
{
	int i;
	int fd;
	char *line;

	i = 1;
	fd = 0;
	if (argc == 1)
		while (get_next_line(0, &line) == 1)
		{
			printf("%s\n", line);
			free(line);
		}
	if (argc > 1)
	{
		while (argv[i] != '\0')
		{	
			fd = open(argv[i], O_RDONLY);
			while (get_next_line(fd, &line) == 1)
			{
				printf("%s\n", line);
				free(line);
			}
		close(fd);
		printf("\n");
		i++;
		}
	}
	close(fd);
	return (0);
}
//*/
/*int		main(int ac, char **av)
{
	int		fd1;
	int		fd2;
	int 	fd3;
	char	*line;

	if (ac == 4)
	{
		fd1 = open(av[1], O_RDONLY);
		fd2 = open(av[2], O_RDONLY);
		fd3 = open(av[3], O_RDONLY);
	
		get_next_line(fd2, &line);	
		printf("%d	""%s\n", fd2, line);
		get_next_line(fd1, &line);
		get_next_line(fd3, &line);
		get_next_line(fd1, &line);
		printf("%d	""%s\n", fd1, line);
		get_next_line(fd3, &line);
		get_next_line(fd2, &line);
		printf("%d	""%s\n", fd2, line);
		get_next_line(fd3, &line);
		printf("%d	""%s\n", fd3, line);

		close(fd1);
		close(fd2);
		close(fd3);
	}
}*/
