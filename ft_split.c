char **ft_split(char *str)
{
    int i = 0;
    int k = 0;
    char **split;
    split = malloc(sizeof(char *) * 256);
    while (str[i] == ' ' || str[i] == '\t'|| str[i]=='\n')
        i++;
    while (str[i])
    {
        int j = 0;
        split[k] = malloc(sizeof(char) * 4096);
        while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
            split[k][j++] = str[i++];
        split[k][j] = '\0';
        k++;
        while (str[i] == ' ' || str[i] == '\t'|| str[i]=='\n')
            i++;
    }
    split[k] = NULL;
    return split;
}
