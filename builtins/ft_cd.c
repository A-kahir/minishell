/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <akahir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 21:12:42 by akahir            #+#    #+#             */
/*   Updated: 2025/04/17 22:21:29 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

void ft_cd(char **str)
{
	char *home;
    int i;
    int j;

    i = 1;
    j = 0;
    if (str[i] && strncmp(str[i], "cd", 2) == 0)
        i++;
    if (str[i] && str[i + 1])
    {
        write(2, "cd: too many arguments\n", 24);
        return;
    }
    if (str[i] == NULL)
    {
        home = getenv("HOME");
		if (!home || chdir(home) != 0)
    		perror("cd failed");
    }
    else
    {
        if (chdir(str[i]) != 0)
            (perror("cd failed"));
    }
}
