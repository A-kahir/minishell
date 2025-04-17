/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <akahir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 17:03:26 by akahir            #+#    #+#             */
/*   Updated: 2025/04/17 17:13:46 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

static int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*ptr;
	int		i;
	int		j;

	ptr = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	i = 0;
	j = 0;
	if (ptr == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		ptr[i + j] = s2[j];
		j++;
	}
	ptr[i + j] = '\0';
	return (ptr);
}
