int	ft_isalpha(int a)
{
    if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
    {
        return (a);
    }
    else
        return (0);
}