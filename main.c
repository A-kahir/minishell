/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabounna <yabounna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 10:31:00 by yabounna          #+#    #+#             */
/*   Updated: 2025/04/17 10:08:51 by yabounna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "minishell.h"


//dak l env khlih radi nhtajo f execution ana
int main(int ac , char **av, char **env)
{
    syntaxe_error_ac_2(ac , av);
    // execute_commands(cmds, env);

}