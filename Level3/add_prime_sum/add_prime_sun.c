#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    if(nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    if(nb >= 10)
    {
        ft_putnbr(nb / 10);
        nb = nb % 10;
    }
    if(nb < 10)
    {
        ft_putchar(nb + '0');
    }
}


int ft_atoi(char *str)
{
    int i = 0;
    int carpan = 1;
    int sonuc = 0;

    while(str[i] <= 32)
        i++;

    if(str[i] == '-')
    {
        carpan = -1;
        i++;
    }
    else if(str[i] == '+')
        i++;
    
    while(str[i] && str[i] >= '0' && str[i] <= '9')
    {
        sonuc = sonuc * 10;
        sonuc = sonuc + (str[i] - '0');
        i++;
    }
    return (sonuc * carpan);
}

int prime(int num)
{
    int i = 3;

    if (num < 2 || num % 2 == 0)
        return 0;
    
    if(num == 2)
        return 2;

    while(i < num)
    {
        if(num % i == 0)
            return 0;
        i += 2;
    }
    return i;
}

int main(int argc, char **argv)
{
    int sum = 0;
    int num = ft_atoi(argv[1]);

    if(argc == 2)
    {
        while(num > 2)
        {
            if(prime(num--))
                sum += num + 1;
        }
        sum += 2;
        ft_putnbr(sum);
    }
    else
        write(1, "0", 1);
    
    write(1, "\n", 1);
    return 0;
}