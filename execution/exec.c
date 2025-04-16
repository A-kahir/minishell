/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <akahir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 19:44:05 by akahir            #+#    #+#             */
/*   Updated: 2025/04/16 20:26:47 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"
static int open_infile(char *infile)
{
	int inf_fd = open(infile, O_RDONLY);
	if (inf_fd < 0)
	{
		perror("Error opening input file");
		inf_fd = open("/dev/null", O_RDONLY);
		if (inf_fd < 0)
			exit(1);
	}
	return (inf_fd);
}

static int open_outfile(char *outfile)
{
	int outf_fd = open(outfile, O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if (outf_fd < 0)
	{
		perror("Error opening output file");
		exit(1);
	}
	return (outf_fd);
}

void execute_commands(t_cmd *cmds, char **env)
{
	pid_t pid1;
	int pipe_fd[2];

	while (cmds)
	{
		int inf_fd = -1;
		int outf_fd = -1;

		if (cmds->next && pipe(pipe_fd) == -1)
			(perror("pipe creation failed"), exit(1));

		pid1 = fork();
		if (pid1 == -1)
			(perror("fork failed"), exit(1));

		else if (pid1 == 0)
		{
			if (cmds->infile)
			{
				inf_fd = open_infile(cmds->infile);
				if (dup2(inf_fd, 0) == -1)
					(perror("dup2 infile failed"), close(inf_fd), exit(1));
				close(inf_fd);
			}
			if (cmds->outfile)
			{
				outf_fd = open_outfile(cmds->outfile);
				if (dup2(outf_fd, 1) == -1)
					(perror("dup2 outfile failed"), close(outf_fd), exit(1));
				close(outf_fd);
			}
			else if (cmds->next)
			{
				if (dup2(pipe_fd[1], 1) == -1)
					(perror("dup2 pipe write failed"), exit(1));
				close(pipe_fd[0]);
				close(pipe_fd[1]);
			}

			// if (cmds->is_builtin == 1)
			// 	ft_builtin(cmds);
			// else
			if (execve(cmds->args[0], cmds->args, env) == -1)
				(perror("execve failed"), exit(1));
		}
		else
		{
			if (cmds->next)
			{
				close(pipe_fd[1]);
				if (dup2(pipe_fd[0], 0) == -1)
					(perror("dup2 pipe read failed"), exit(1));
				close(pipe_fd[0]);
			}
			waitpid(pid1, NULL, 0);
			cmds = cmds->next;
		}
	}
}
