/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomanuel <tomanuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 11:35:26 by tomanuel          #+#    #+#             */
/*   Updated: 2026/09/13 12:59:01 by tomanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}


#include <stdio.h>
#include <string.h>
int main(void)
{
    printf("1: %d | %d\n", ft_strcmp("casa", "casa"), strcmp("casa", "casa"));
    printf("2: %d | %d\n", ft_strcmp("amor", "bola"), strcmp("amor", "bola"));
    printf("3: %d | %d\n", ft_strcmp("manga", "maçã"), strcmp("manga", "maçã"));
    printf("4: %d | %d\n", ft_strcmp("água", "vinho"), strcmp("água", "vinho"));
    return (0);
}
