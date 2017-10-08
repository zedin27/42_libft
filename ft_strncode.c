#include <iostream>

void	ft_striter(char *s, void(*f)(char *))
{
	if (s != NULL && f != NULL)
	{
		while (*s)
			f(s++);
	}
}

void	ft_striteri(char *s, void(*f)(unsigned int, char *))
{
	size_t i;
	if (s && f)
	{
		i = 0;
		while (*s)
		{
			*f(i, s++);
			i++;
		}
	}
}

char	*ft_strmap(char const *s, char(*f)(char))
{
	char *str;
	int i;

	str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	if (str)
	{
		while (s[i])
		{
			str[i] = (*f)(str[i]);
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}

char	*ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
	char *str;
	int i;

	str = (char *)malloc(ft_strlen(s));
	i = 0;
	if (str)
	{
		ft_strstr(str, s);
		while (s[i])
		{
			str[i] = f(i, s[i]);
			i++;
		}
	}
	else
		return (NULL);
	return (str);
}

int		ft_strenqu(char const *s1, char const *s2, size_t n)
{
	if (s1 && s2)
		if (!ft_strncmp(s1, s2, n) || (!n))
			return (1);
	return (0);
}

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *new_len;

	new_len = ft_strnew(len);
	if (s)
	{
		if (new_len)
			return (ft_strncpy(new_len, s + start, len));
		return (NULL);
	}
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *res;

	res = (char *)malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1) //Maybe use strnew and strlen for this to short it out
	if (res)
	{
		ft_strcpy(res, s1);
		ft_strcat(res, s2);
	}
	return (res)
}

static int	isspace(char c)
{
	return (c == '\t' || c == '\n' || c == ' ');
}

char	*ft_strtrim(char const *s) //mmmm?
{
	char *c;
	int i;

	c = s;
	i = 0;
	if (c != '\0' && *c == isspace(s))
		c++;
	s = c;
	c = s + ft_strlen
	if (trimmed)
	{
		trimmed = 
		i++;
	}
}