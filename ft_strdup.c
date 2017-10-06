/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 16:54:46 by ztisnes           #+#    #+#             */
/*   Updated: 2017/10/06 02:50:19 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*temp;

	if(!(temp = ft_strnew(ft_strlen(str))))
		return (NULL);
	return (ft_strcpy(temp, str));
}

/*int main()
{
    char source[] = "GeeksForGeeks";

    // A copy of source is created dynamically
    // and pointer to copy is returned.
    char *target;
		target = ft_strdup(source);

    printf("%s", source);
    return 0;
}
*/
