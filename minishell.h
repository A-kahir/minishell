/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <akahir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 19:44:54 by akahir            #+#    #+#             */
/*   Updated: 2025/04/15 19:45:39 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
#define MINISHELL_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_cmd
{
    char **args;
    char *infile;
    char *outfile;
    int append;
    int is_builtin;
    struct s_command *next;
} t_cmd;


#endif