#include <unistd.h>

int main(int argc, char **argv)
{
    int i;

    i = 0;
    if(argc == 2)
    {
        while(argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;
        
        while(argv[1][i] != '\0')
        {
            if(argv[1][i] == 32 || argv[1][i] == 9)
            {
                if(argv[1][i + 1] > 32 || argv[1][i + 1])
                    write(1, " ", 1);
            }
            else if(argv[1][i] != 32 || argv[1][i] != 9)
                write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}