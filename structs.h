/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabounna <yabounna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 10:53:39 by yabounna          #+#    #+#             */
/*   Updated: 2025/04/19 11:00:58 by yabounna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
#define STRUCTS_H



//----------struct parsing part---------------

typedef struct s_token
{
    char    *value;        //texte du tokens ('ls' , '|' , 'grep' ...)
    int     type;          //type  du tokens (CMD , ARG , PIPE ...)
    struct s_token *next;  //token suivant (list chaine)
}   t_token;





//----------struct execution part---------------





#endif