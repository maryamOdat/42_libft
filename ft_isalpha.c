/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 10:33:30 by modat             #+#    #+#             */
/*   Updated: 2024/09/14 14:20:09 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int alpha)
{
	if (!((alpha >= 'A' && alpha <= 'Z')
			|| (alpha >= 'a' && alpha <= 'z')))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}