/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enviale <enviale@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 15:04:20 by enviale           #+#    #+#             */
/*   Updated: 2026/10/28 16:32:32 by enviale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	nb;
	int		in_word;

	in_word = 0;
	nb = 0;
	i = 0;
	while (s[i])
	{
		if (!in_word && s[i] != c)
		{
			nb++;
			in_word = 1;
		}
		else if (in_word && s[i] == c)
			in_word = 0;
		i++;
	}
	return (nb);
}

static void	free_split(char **split, size_t i)
{
	while (i > 0)
	{
		i--;
		free(split[i]);
	}
	free(split);
}

static int	fill_words(char const *s, char c, char **tab)
{
	size_t	i;
	size_t	length;
	char	*chain;

	i = 0;
	chain = (char *) s;
	while (*chain)
	{
		length = 0;
		while (*chain == c)
			chain++;
		if (!*chain)
			break ;
		while (chain[length] && chain[length] != c)
			length++;
		tab[i] = ft_substr(chain, 0, length);
		if (!tab[i])
		{
			free_split(tab, i);
			return (1);
		}
		chain += length;
		i++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	nb_words;

	if (!s)
		return (NULL);
	nb_words = count_words(s, c);
	split = malloc(sizeof(char *) * (nb_words + 1));
	if (!split)
		return (NULL);
	if (fill_words(s, c, split) == 1)
		return (NULL);
	split[nb_words] = NULL;
	return (split);
}

// int main(void)
// {
//     char const *s = "Hello-World-!-Bonjour-monde-!";
//     char  c = '-';
// 	char *output = ft_split(s,c);
// 	if(!output)
// 		printf("Erreur : échec de l'allocation mémoire (malloc).\n");
// 	printf("%s\n",output);
// 	return (0);
// }