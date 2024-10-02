/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crea <crea@student.42roma.it>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 20:01:44 by crea              #+#    #+#             */
/*   Updated: 2024/02/05 14:43:16 by crea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *str, char c);
static void		make_words(char **words, const char *str, char c, size_t words_nb);

/*	ft_split:
**	Splits the string 'str' into an array of strings based on the delimiter 'c'.
**	The function allocates memory for the array and each substring, and uses
**	auxiliary functions to count words and create substrings.
**	Returns a NULL-terminated array of strings.
*/
char	**ft_split(const char *str, char c)
{
	size_t	words_nb;
	char	**words;

	if (!str)
		return (NULL);
	words_nb = count_words(str, c);
	words = malloc(sizeof(char **) * (words_nb + 1));
	if (!words)
		return (NULL);
	make_words(words, str, c, words_nb);
	return (words);
}

/*	count_words:
**	Counts the number of words in the string 'str' separated by the delimiter 'c'.
**	A word is defined as a sequence of characters not equal to 'c'.
**	The function increments the count whenever a new word is encountered.
*/
static size_t	count_words(const char *str, char c)
{
	size_t	words_count;
	int		sep;

	words_count = 0;
	sep = 1;
	while (*str)
	{
		if (*str != c && sep != 0)
		{
			sep = 0;
			words_count++;
		}
		else if (*str == c)
			sep = 1;
		str++;
	}
	return (words_count);
}

/*	make_words:
**	Fills the 'words' array with substrings extracted from 'str' based on the delimiter 'c'.
**	The function uses 'ft_strchr' to locate the next delimiter and 'ft_substr' to create substrings.
**	After processing each substring, it advances the 'str' pointer and continues until all words
**	are processed. The end of the 'words' array is marked with a NULL pointer.
*/
static void	make_words(char **words, const char *str, char c, size_t words_nb)
{
	char	*ptr_c;

	while (*str && *str == c)
		str++;
	while (words_nb-- != 0)
	{
		ptr_c = ft_strchr(str, c);
		if (ptr_c != NULL)
		{
			*words = ft_substr(str, 0, (ptr_c - str));
			while (*ptr_c && *ptr_c == c)
				ptr_c++;
			str = ptr_c;
		}
		else
			*words = ft_substr(str, 0, (ft_strlen(str) + 1));
		words++;
	}
	*words = NULL;
}
