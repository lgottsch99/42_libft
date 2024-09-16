/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgottsch <lgottsch@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 12:40:02 by lgottsch          #+#    #+#             */
/*   Updated: 2024/06/10 15:34:19 by lgottsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	x;

	x = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 122 || str [i] < 65)
		{
			x = 0;
			break ;
		}
		else if (str[i] > 90 && str[i] < 97)
		{
			x = 0;
			break ;
		}
		i++;
	}
	return (x);
}

//default assumption: only alpha in str, we change to zero if other char found
/*
int	main()
{
	int	i;
	char	string[] = "hello123";

	i = ft_str_is_alpha(string);

	printf("%i\n", i);

}*/
