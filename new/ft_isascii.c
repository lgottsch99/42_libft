/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgottsch <lgottsch@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:59:40 by lgottsch          #+#    #+#             */
/*   Updated: 2024/09/16 16:04:22 by lgottsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
// #include <stdio.h>
// int main (void)
// {
// 	int c = 127;
// 	int i= ft_isascii(c);
// 	printf("%i\n", i);
// }