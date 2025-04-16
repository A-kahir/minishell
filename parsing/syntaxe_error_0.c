/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   syntaxe_error_0.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabounna <yabounna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 09:35:02 by yabounna          #+#    #+#             */
/*   Updated: 2025/04/16 11:19:21 by yabounna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"


void syntaxe_error(int ac , char **av)
{
    int i;

    i = 0;
    if (ac == 3)
    {
        if ((strcmp(av[1], "|") == 0) && (strcmp(av[2], "ls") == 0))
            write(1,"minishell: syntax error near unexpected token `|'\n",51);
        else if ((strcmp(av[1], "||") == 0) && (strcmp(av[2], "ls") == 0))
            write(1,"minishell: syntax error near unexpected token `||'\n" ,  52);
        else if ((strcmp(av[1], "ls") == 0) && (strcmp(av[2], ">") == 0))
            write(1, "minishell: syntax error near unexpected token `newline'\n", 58);
        else if ((strcmp(av[1], "cat") == 0) && (strcmp(av[2], "<") == 0))
            write(1, "minishell: syntax error near unexpected token `newline'\n", 58);
    }
  
}
