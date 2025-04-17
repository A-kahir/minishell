/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <akahir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 19:44:54 by akahir            #+#    #+#             */
/*   Updated: 2025/04/17 20:39:51 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
#define MINISHELL_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

//debug :
#include <stdio.h>
#include <string.h>


typedef struct s_cmd
{
    char **args;
    char *infile;
    char *outfile;
    int append;
    int is_builtin;
    struct s_cmd *next;
} t_cmd;

//parsing part :
void syntaxe_error_ac_2(int ac , char **av);
void syntaxe_error_ac_3(int ac , char **av);
void syntaxe_error_ac_4(int ac , char **av);





//execution part :


// prencipal functions :
void execute_commands(t_cmd *cmds, char **env);

//utils functions :
void	ft_close_fd(int *infile, int *outfile, int pipe_fd[2]);
int	ft_strncmp(char *s1, char *s2, size_t n);

#endif