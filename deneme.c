#include <unistd.h>

int is_prime(int num)
{
    int i;

    i = 2;
    if(num == 2)
        return 1;

    while (i <= num/2)
    {
        if(num % i == 0)
            return 0;
        i++;
    }
    return 1;
}

int ft_atoi(char *str)
{
    int number = 0;
    int i = 0;
    int carpan = 1;

    if(!str)
        return 0;
    
    if(str[i] == '-')
    {
        carpan *= -1;
        i++;
    }
    else if(str[i] == '+')
        i++;
    
    while(str[i])
    {
        number = number * 10;
        number = number + (str[i] - 48);
        i++;
    }

    return (number * carpan);

}

void ft_putnbr(int num)
{
    char c;

    if(a < 0)
    {
        write(1, "-", 1);
        num *= -1;
    }
    if(a > 9)
        ft_putnbr(num / 10);
    
    c = (num % 10) + '0';
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    int num;
    int sum;
    int i;

    num = ft_atoi(argv[1]);
    if(argc != 2 || !num)
        write(1, "0", 1);

    else
    {
        i = 2;
        sum = 0;
        while (i <= num)
        {
            if(is_prime(i))
            {
                sum += i;
            }
            i++;
        }
        ft_putnbr(sum);
    }
    write(1, "\n", 1);
    return 0;

}