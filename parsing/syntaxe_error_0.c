/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   syntaxe_error_0.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <akahir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 09:35:02 by yabounna          #+#    #+#             */
/*   Updated: 2025/04/16 14:28:56 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void syntaxe_error_ac_2(int ac , char **av)
{
    if (ac == 2)
    {
        if ((strcmp(av[1], ">") == 0))
            write(1,"minishell: syntax error near unexpected token `newline'\n",57);
        if ((strcmp(av[1], "<") == 0))
            write(1,"minishell: syntax error near unexpected token `newline'\n",57);
        if ((strcmp(av[1], "|") == 0))
            write(1,"minishell: syntax error near unexpected token `|'\n",51);     
    }
    syntaxe_error_ac_3(ac , av);
    
}

void syntaxe_error_ac_3(int ac , char **av)
{
    if (ac == 3)
    {
        if ((strcmp(av[1], "|") == 0) && (strcmp(av[2], "ls") == 0))
            write(1,"minishell: syntax error near unexpected token `|'\n",51);
        else if ((strcmp(av[1], "||") == 0) && (strcmp(av[2], "ls") == 0))
            write(1,"minishell: syntax error near unexpected token `||'\n" ,  52);
        else if ((strcmp(av[1], "|||") == 0) && (strcmp(av[2], "ls") == 0))
            write(1,"minishell: syntax error near unexpected token `||'\n" ,  52);
        else if ((strcmp(av[1], "ls") == 0) && (strcmp(av[2], ">") == 0))
            write(1, "minishell: syntax error near unexpected token `newline'\n", 58);
        else if ((strcmp(av[1], "ls") == 0) && (strcmp(av[2], "<") == 0))
            write(1, "minishell: syntax error near unexpected token `newline'\n", 58);
        else if ((strcmp(av[1], "cat") == 0) && (strcmp(av[2], "<") == 0))
            write(1, "minishell: syntax error near unexpected token `newline' \n", 58);
        else if ((strcmp(av[1], "cat") == 0) && (strcmp(av[2], ">") == 0))
            write(1, "minishell: syntax error near unexpected token `newline'\n", 58);
    }
    syntaxe_error_ac_4(ac , av);
}

void syntaxe_error_ac_4(int ac , char **av)
{
    if (ac == 4)
    {
        if ((strcmp(av[1], "echo") == 0) && (strcmp(av[2], "test") == 0) && (strcmp(av[3], ">>") == 0))
            write(1,"minishell: syntax error near unexpected token `newline'\n",57);   
    }        
}
