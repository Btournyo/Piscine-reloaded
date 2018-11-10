/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tournyol <tournyol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 10:06:00 by tournyol          #+#    #+#             */
/*   Updated: 2018/11/09 10:31:03 by tournyol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_putchar(char c);

void    ft_putstr(char *str)
{
    while (*str)
        ft_putchar(*str++);
}

int		ft_strcmp(char *s1, char *s2)
{
	int a;
	int cmp;

	cmp = 0;
	a = -1;
	while (s1[a + 1] && s2[a + 1])
	{
		a++;
		if (s1[a] == s2[a])
			cmp = 0;
		else if (s1[a] > s2[a])
		{
			cmp = s1[a] - s2[a];
			return (cmp);
		}
		else if (s1[a] < s2[a])
		{
			cmp = s1[a] - s2[a];
			return (cmp);
		}
	}
	return (cmp);
}

int main(int ac, char **av)
{
    int i;
    char *temp;

    i = 1;
    while (i < ac - 1)
    {
        if (ft_strcmp(av[i], av[i + 1]) >= 0)
        {
            temp = av[i];
            av[i] = av[i + 1];
            av[i + 1] = temp;
            i = 0;
    }
        i++;
    }
    i = 1;
    while (i < ac)
    {
       ft_putstr(av[i]);
       ft_putchar('\n');
       i++;
    }
    return (0);
}