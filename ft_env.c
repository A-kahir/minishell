/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_env.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <akahir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 20:16:45 by akahir            #+#    #+#             */
/*   Updated: 2025/04/18 21:02:34 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

void ft_env(char **str, char **env)
{
    int i;
    
    i = 1;
    if (ft_strncmp(str[i], "env", 4) == 0 && str[i + 1] != NULL)
    {
        write(2, "env : too many arguments\n", 25);
        return ;
    }
    else if (str[i] && ft_strncmp(str[i], "env", 4) == 0)
    {
        i = 0;
        while (env[i] != NULL)
        {
            printf("%s\n", env[i]);
            i++;
        }
    }
}


int main(int argc, char **argv, char **env)
{
    if (argc == 0)
        return (0);
    ft_env(argv, env);    
}