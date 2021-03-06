/*
** EPITECH PROJECT, 2017
** lemin
** File description:
** strcmp
*/

#include "utils.h"
#include "printf.h"

size_t my_strlen(char *s)
{
		size_t len = 0;

		if (!s)
				return (0);
		while (*s)
		{
				++len;
				s++;
		}
		return (len);
}

int my_strcmp(const char *s1, const char *s2)
{
		if (!s1 && !s2)
				return (0);
		else if (!s1 || !s2)
				return (!s1 ? -1 : 1);
		while (*s1 && *s2)
		{
				if (*s1 < *s2)
						return (-1);
				else if (*s1 > *s2)
						return (1);
				s1++;
				s2++;
		}
		
		if (!(*s1) && (*s2))
				return (-1);
		else if (*s1 && !(*s2))
				return (1);
		return (0);
}
/*
char *my_strcpy(char *dst, char *src)
{
		if (!dst || !src)
				return (dst);
		while ((*dst++ = *src++))
		{}
		return (dst);
}
*/
char *my_strdup(char *s)
{
		size_t len = my_strlen(s);
		char *p = NULL;

		if (!s)
				return (NULL);
		if (!len || !(p = malloc(len + 1)))
				return (NULL);
		while (*s)
				*p++ = *s++;
		*p = 0;
		return (p - len);
}
