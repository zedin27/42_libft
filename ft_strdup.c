/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 16:54:46 by ztisnes           #+#    #+#             */
/*   Updated: 2017/09/27 16:35:51 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	unsigned char	*temp;
	size_t			len;

	len = ft_strlen(str) + 1;
	temp = malloc(len);
	return (temp) ? ft_memcpy(temp, str, len) : NULL;
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
