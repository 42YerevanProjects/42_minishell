#include "../includes/minishell.h"

int	token_num(char *line)
{
	char	**tokens;
	int		i;

	tokens = ft_split(line, ' ');
	i = 0;
	while (tokens[i])
		i++;
	free(tokens);
	return (i);
}