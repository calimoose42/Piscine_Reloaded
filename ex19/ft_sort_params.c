/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 19:29:40 by arohani           #+#    #+#             */
/*   Updated: 2017/04/10 19:38:41 by arohani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_print_params(char **av)
{
	int i;
	int j;

	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			ft_putchar(av[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

char	**ft_sort_params(char **av)
{
	char	*temp;
	int		i;
	int		j;

	i = 1;
	while (av[i] != '\0')
	{
		j = 0;
		while (av[j] != '\0')
		{
			if (ft_strcmp(av[i], av[j]) < 0)
			{
				temp = av[i];
				av[i] = av[j];
				av[j] = temp;
			}
			j++;
		}
		i++;
	}
	return (av);
}

int		main(int ac, char **av)
{
	if (ac == 1)
		return (0);
	ft_print_params(ft_sort_params(av));
	return (0);
}
