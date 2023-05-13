#include <stdio.h>

//str c spn --> string complement span --> dizi tamamlama araligi
size_t ft_strcspn(const char *s, const char *reject)
{
    int i = 0;
    int j = 0;

    while (s[i] != '\0')
    {
        j = 0;
        while (reject[j] != '\0')
        {
            if (s[i] == reject[j])
                return(i);
            j++;
        }
        i++;
    }
    i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}

int main ()
{
    const char *str = "rabia-c alik!";
    const char *str2 = " -";

    printf("%d", ft_strcspn(str, str2));
}