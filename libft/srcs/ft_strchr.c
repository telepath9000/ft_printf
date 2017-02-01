/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 14:26:21 by wdebs             #+#    #+#             */
/*   Updated: 2016/09/29 23:10:59 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	new;

	i = 0;
	new = (char)c;
	if (c != '\0')
	{
		while (s[i] != '\0')
		{
			if (s[i] != new)
				i++;
			else if (s[i] == new)
				return ((char *)&s[i]);
		}
	}
	else if (c == '\0')
	{
		while (s[i] != '\0')
			i++;
		return ((char *)&s[i]);
	}
	return (0);
}
