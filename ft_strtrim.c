/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 21:39:35 by ztisnes           #+#    #+#             */
/*   Updated: 2017/10/08 18:08:33 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		step1_getPosition(char const *string)
{
	int i;

	i = 0;
	while(ft_iswhitespace(string[i]))
	{
			i++;
			continue;
	}
	return (i);
}

char	*step2_copyString(char const *string, int pos)
{
	char *tmp;
	int		i;

	i = 0;
	tmp = ft_strnew(ft_strlen(string));
	if(tmp == NULL)
		return (NULL);
	while (string[pos] != '\0')
		tmp[i++] = string[pos++];
	return (tmp);
}

char	*step3_removeWhite(char *str)
{
	int i;

	i = ft_strlen(str);
	while (str[i] == '\0' || ft_iswhitespace(str[i]))
	{
		str[i] = '\0';
		i--;
	}
	return (str);
}

char	*step4_removeExtraNulls(char *str)
{
	char *newstring;

	newstring = ft_strdup(str);
	if(newstring == NULL)
		return (NULL);
	free(str);
	return (newstring);
}

char	*ft_strtrim(char const *string)
{
	char	*trim;
	int		i;

	i = step1_getPosition(string);
	trim = step2_copyString(string, i);
	if (trim == NULL)
		return (NULL);
	step3_removeWhite(trim);
	trim = step4_removeExtraNulls(trim);
	if (trim == NULL)
		return (NULL);
	return (trim);
}
