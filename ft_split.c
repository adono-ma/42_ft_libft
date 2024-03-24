/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adono-ma <adono-ma@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 18:37:51 by adono-ma          #+#    #+#             */
/*   Updated: 2024/03/24 22:35:25 by adono-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	space_free(char **subs, int i)
{
	while (i)
	{
		free(subs[i - 1]);
		i--;
	}
	free(subs);
}

static int	count_words(char const *s, char c)
{
	int	i;
	int	wordnum;

	i = 0;
	wordnum = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			wordnum++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (wordnum);
}

char	**ft_split(char const *s, char c)
{
	int		wordmod;
	int		i;
	char	**subs;

	i = -1;
	subs = (char **)ft_calloc((count_words(s, c) + 1), sizeof(char *));
	if (!subs || !s)
		return (0);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				wordmod = ft_strlen(s);
			else
				wordmod = ft_strchr(s, c) - s;
			subs[++i] = ft_substr(s, 0, wordmod);
			if (!subs[i])
				return (space_free(subs, i), NULL);
			s += wordmod;
		}
	}
	return (subs);
}

/*
int	main(void)
{
	char *s = "Hola_holita_vecinito_!"
	char c = '_';
	char	**subs;
	int		i;
	
	i = 0;
	subs = ft_split(s, c);
	while (tab[i)
	{
		printf("%s\n",subs[i]);
		free(subs[i]);
		i++;
	}
	free(subs);
	return (0);
}
*/