/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomanuel <tomanuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 21:17:32 by tomanuel          #+#    #+#             */
/*   Updated: 2026/09/19 18:19:41 by tomanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*array;
	int		i;

	if (min >= max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}

/*
#include <stdio.h>
int main(void)
{
    int *array;
    int i;

    array = ft_range(5, 10);
    if (array)
    {
        i = 0;
        while (i < (10 - 5))
        {
            printf("%d ", array[i]);
            i++;
        }
        printf("\n");
        free(array);
    }
    else
        printf("array e NULL (inesperado aqui)\n");

    array = ft_range(10, 5);
    if (array == NULL)
        printf("OK: min >= max devolveu NULL\n");
    else
    {
        printf("ERRO: devia ter devolvido NULL\n");
        free(array);
    }

    return (0);
}
*/