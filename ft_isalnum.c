/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 10:01:53 by modat             #+#    #+#             */
/*   Updated: 2024/09/01 10:11:02 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int alnum)
{
	if ((alnum >= 48 && alnum <= 57) || (alnum >= 65 && alnum <= 90)
		|| (alnum >= 97 && alnum <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}