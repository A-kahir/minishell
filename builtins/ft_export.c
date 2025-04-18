/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_export.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <akahir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 15:54:22 by akahir            #+#    #+#             */
/*   Updated: 2025/04/18 18:25:45 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

void ft_export(char **str, char **env)
{
    int i = 1;

    if (str[i + 1] != NULL)
    {
        write(2, "export: too many arguments\n", 28);
        return;
    }

    while (env[i])
    {
        char *equal = ft_strchr(env[i], '=');
        if (equal)
        {
            int key_len = equal - env[i];
            // write(1, "declare -x ", 11);
            write(1, env[i], key_len);
            write(1, "=\"", 2);
            write(1, equal + 1, ft_strlen(equal + 1));
            write(1, "\"\n", 2);
        }
        else
        {
            write(1, "declare -x ", 11);
            write(1, env[i], ft_strlen(env[i]));
            write(1, "\n", 1);
        }
        i++;
    }
}

int main(int argc, char **argv, char **env)
{
    if (argc == 0)
    {
        return (0);
    }
    ft_export(argv, env);
}
