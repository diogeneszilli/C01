/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dludtke- <dludtke-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 20:05:00 by dludtke-          #+#    #+#             */
/*   Updated: 2021/04/04 20:20:25 by dludtke-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int arr[size];
	int i;
	int j;

	i = size - 1;
	j = 0;
	while (i >= 0)
	{
		arr[j] = tab[i];
		j++;
		i--;
	}
	j = 0;
	while (j < size)
	{
		tab[j] = arr[j];
		j++;
	}
}
