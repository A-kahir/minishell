/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pwd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <akahir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 22:30:02 by akahir            #+#    #+#             */
/*   Updated: 2025/04/18 15:46:41 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

void ft_pwd(char **str)
{
	char *buff;
    int i;
    int j;

	i = 1;
	if (str[i + 1] != NULL)
	{
		write(1, "pwd: too many arguments\n", 24);
		return;
	}
	j = 0;
	buff = getcwd(NULL, 0);
	if (str[i] && ft_strncmp(str[i], "pwd", 3) == 0)
	{
		if (buff != NULL)
		{
			printf("%s\n", buff);
			free(buff);
		}
		else
			perror("pwd failed");
	}
}
