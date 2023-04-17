// SEN BUNU ANLAMADIN RABİA SONRA GEL YİNE BAK BENİM BEYNİM YANDİ

#include <stddef.h> //size_t icin kullanildi
#include <stdio.h>

size_t ft_strspn(const char *s, const char *accept)
{
    size_t i = 0;
    while (s[i])
    {
        size_t j = 0;
        while (accept[j])
        {
            if (s[i] == accept[j])
            {
                break;
            }
            j++;
        }
        if (!accept[j])
        {
            return i;
        }
        i++;
    }
    return i;
}

int main(void)
{
    const char *str1 = "Hello World";
    const char *str2 = "Hol";
    size_t result = ft_strspn(str1, str2);
    printf("ft_strspn result: %zu\n", result);
    return 0;
}
