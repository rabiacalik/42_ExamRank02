#include "flood_fill.h"

void fill(char **tab, t_point uzunluk, t_point mahmut, char sukufe)
{
    if(mahmut.y < 0 || mahmut.y >= uzunluk.y || mahmut.x < 0 || mahmut.x >= uzunluk.x
        || tab[mahmut.y][mahmut.x] != sukufe)
        return;

    tab[mahmut.y][mahmut.x] = 'F';

    fill(tab, uzunluk, (t_point){mahmut.x - 1, mahmut.y}, sukufe);
    fill(tab, uzunluk, (t_point){mahmut.x + 1, mahmut.y}, sukufe);
    fill(tab, uzunluk, (t_point){mahmut.x, mahmut.y - 1}, sukufe);
    fill(tab, uzunluk, (t_point){mahmut.x, mahmut.y + 1}, sukufe);
}

void flood_fill(char **tab, t_point size,t_point begin)
{
    fill(tab, size, begin, tab[begin.y][begin.x]);
}