/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 00:55:39 by ztisnes           #+#    #+#             */
/*   Updated: 2017/10/05 19:38:45 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (!little)
		return ((char *)big);
	while (big[i])
	{
		j = 0;
		while ((big[i] == little[j]) && big[i] && (i < len))
		{
			i++;
			j++;
		}
		if (!little[j])
			return ((char *)&big[i - j]);
		i = (i - j) + 1;
	}
	return (NULL);

	// size_t length;
	// int i;
	// int j;
	//
	// j = 0;
	// i = 0;
	// length = ft_strlen(big);
	// if (!little)
	// 	return (char *)big;
	// while (big[i] && len != 0)
	// {
	// 	j = 0;
	// 	if (big[i] == little[j] && little[j] != '\0')
	// 	{
	//
	// 		i++;
	// 		j++;
	// 	}
	// 		return (char *) big;
	// 	big++;
	// }
	// return (NULL);
}

int main()
{
	char big[11] = "watermelon";
	char little[6] = "melon";

	printf("%s\n", ft_strnstr(big, little, 10));
	printf("%s", strnstr(big, little, 10));
}
