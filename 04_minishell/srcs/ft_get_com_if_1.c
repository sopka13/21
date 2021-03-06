/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_com_if_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyohn <sopka13@mail.ru>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 23:07:46 by eyohn             #+#    #+#             */
/*   Updated: 2021/06/03 23:27:53 by eyohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

int		ft_get_com_if_1(const char *str, char a, t_temp_1 *tp)
{
	if (a == '&' && str[tp->k] == '&' && tp->k + 1 < (int)ft_strlen(str) &&
		str[tp->k + 1] == '&')
	{
		tp->k += 1;
		return (1);
	}
	if ((str[tp->k] == a && a != '&') || (a == ' ' && (str[tp->k] == a ||
		str[tp->k] == '\t')))
		return (1);
	return (0);
}
