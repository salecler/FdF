#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_words(const char *s, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[i] == c && s[i])
		i++;
	while (s[i] != '\0')
	{
		while (s[i] != c)
		{
			if (s[i + 1] == c)
				len++;
			i++;
		}
		while (s[i] == c && s[i])
			i++;
	}
	return (len);
}

void	put_word(char **str, char *s, int len_word, int i)
{
	int	j;

	j = 0;
	while (len_word > 0)
	{
		*str[j] = s[i - len_word];
		j++;
		len_word--;
	}
	*str[j] = '\0';
}

char	**free_split(char **str, int pos_word)
{
	while (pos_word > 0)
	{
		free(str[pos_word]);
		pos_word--;
	}
	free(str);
	return (NULL);
}

char    **ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		all_words;
	int		pos_word;
	int		len_word;

	if (!s)
		return (NULL);
	i = 0;
	all_words = ft_words(s, c);
	str = malloc(sizeof(char *) * all_words + 1);
	if (!str)
		return (NULL);
	*str[all_words] = '\0';
	pos_word = 0;
	len_word = 0;
	while (pos_word < all_words)
	{
		while (*str[i] == c && str[i] != '\0')
			i++;
		while (*str[i] != c && str[i] != '\0')
		{
			len_word++;
			i++;
		}
		str[pos_word] = (char *)malloc(sizeof(char) * len_word + 1);
		if (!*str[pos_word])
			return (free_split(str, pos_word));
		put_word(&str[pos_word], (char *) s, len_word, i);
		len_word = 0;
		pos_word++;
	}
	return (str); 
}
