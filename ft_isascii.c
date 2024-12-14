/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ascii.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 10:22:40 by modat             #+#    #+#             */
/*   Updated: 2024/09/14 14:23:54 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int isascii)
{
	if (isascii >= 0 && isascii <= 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
