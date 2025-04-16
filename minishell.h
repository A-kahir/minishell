/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabounna <yabounna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 19:44:54 by akahir            #+#    #+#             */
/*   Updated: 2025/04/16 11:56:05 by yabounna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
#define MINISHELL_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include  <string.h>

typedef struct s_cmd
{
    char **args;
    char *infile;
    char *outfile;
    int append;
    int is_builtin;
    struct s_command *next;
} t_cmd;


void syntaxe_error_ac_2(int ac , char **av);
void syntaxe_error_ac_3(int ac , char **av);
void syntaxe_error_ac_4(int ac , char **av);



#endif