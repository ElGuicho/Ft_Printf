/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printhexa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmunoz                                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:11:22 by gmunoz            #+#    #+#             */
/*   Updated: 2024/01/16 14:20:45 by gmunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ifhexa(va_list args, int i)
{
	unsigned int	ptr;
	char			*hexa_str;

	ptr = va_arg(args, unsigned int);
	if (ptr == 0)
		return (ft_putstr_fd("0", 1));
	hexa_str = dec_to_hexalower(ptr);
	if (!hexa_str)
		return (-1);
	i = ft_strlen(hexa_str);
	if (ft_putstr_fd(hexa_str, 1) == -1)
		i = -1;
	free (hexa_str);
	return (i);
}

int	ifhexa_caps(va_list args, int i)
{
	long unsigned int	ptr;
	char				*hexa_str;

	ptr = va_arg(args, unsigned int);
	if (ptr == 0)
		return (ft_putstr_fd("0", 1));
	hexa_str = dec_to_hexaupper(ptr);
	if (!hexa_str)
		return (-1);
	i = ft_strlen(hexa_str);
	if (ft_putstr_fd(hexa_str, 1) == -1)
		i = -1;
	free (hexa_str);
	return (i);
}
