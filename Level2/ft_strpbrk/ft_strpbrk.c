#include <stdio.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
    int i = 0;
    int j = 0;

    if ( !s1 || !s2)
        return NULL;
    
    while (s1[i] != '\0')
    {
        while (s2[i] != '\0')
        {
            if (s1[i] == s2[j])
                return (char*)&s1[i];
            j++;
        }
        j = 0;
    }
    return NULL;
}

int main ()
{
    const char* str1 = "rabia -calik!";
    const char* str2 = "-!";
    char* sonuc;

    sonuc = ft_strpbrk(str1, str2);

    printf("aranan karakterlerden bulunan : %c\n", *sonuc);
    printf("Bulunan karakterin adresi : %p\n", sonuc);
}