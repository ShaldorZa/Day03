/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaniena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/05 07:16:50 by shaniena          #+#    #+#             */
/*   Updated: 2016/02/05 07:19:33 by shaniena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_utlimate_div_mod(int *a, int *b)
{
	int		temp1;
	int		temp2;

	temp1 = *a / *b;
	temp2 = *a % *b;

	*a = temp1;
	*b = temp2;
}
