/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isquote.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkoehler <fkoehler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 15:39:16 by fkoehler          #+#    #+#             */
/*   Updated: 2016/08/24 15:40:54 by fkoehler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isquote(int c)
{
	if (c == 39)
		return (1);
	else if (c == 34)
		return (2);
	else if (c == 96)
		return (3);
	else
		return (0);
}
