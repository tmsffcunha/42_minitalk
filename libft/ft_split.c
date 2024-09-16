/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfelguei <tfelguei.students.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:31:24 by tfelguei          #+#    #+#             */
/*   Updated: 2024/05/22 21:21:50 by tfelguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	count_words(const char *s, char c)
{
	unsigned int	count;
	int				in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
		{
			in_word = 0;
		}
		s++;
	}
	return (count);
}

static const char	*skip_delimiters(const char *s, char c)
{
	while (*s == c)
		s++;
	return (s);
}

static char	*get_next_word(const char **s, char c)
{
	const char	*start;
	const char	*end;
	char		*word;
	size_t		length;

	*s = skip_delimiters(*s, c);
	start = *s;
	end = ft_strchr((char *)start, c);
	if (end == NULL)
		end = start + ft_strlen(start);
	length = end - start;
	word = (char *)malloc((length + 1) * sizeof(char));
	if (word)
		ft_strlcpy(word, start, length + 1);
	*s = end;
	return (word);
}

char	**ft_split(const char *s, char c)
{
	char			**words;
	unsigned int	word_count;
	unsigned int	i;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	words = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	i = 0;
	while (i < word_count)
	{
		words[i] = get_next_word(&s, c);
		if (!words[i])
		{
			while (i > 0)
				free(words[--i]);
			free(words);
			return (NULL);
		}
		i++;
	}
	words[i] = NULL;
	return (words);
}
