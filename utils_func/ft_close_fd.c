/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_close_fd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <akahir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 17:28:37 by akahir            #+#    #+#             */
/*   Updated: 2025/04/16 20:09:42 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

void	ft_close_fd(int *infile, int *outfile, int pipe_fd[2])
{
	close(*infile);
	close(*outfile);
	close(pipe_fd[0]);
	close(pipe_fd[1]);
}
