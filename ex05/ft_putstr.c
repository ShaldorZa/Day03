/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaniena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/05 07:25:02 by shaniena          #+#    #+#             */
/*   Updated: 2016/02/05 07:57:34 by shaniena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str);

int		ft_putchar(char c);

void	ft_putstr(char *str)
{
	str = "toto";
	ft_putchar(*str);
	ft_putchar('\n');
}

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
