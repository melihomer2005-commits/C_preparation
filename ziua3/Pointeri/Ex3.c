#include <stdio.h>
void modifica(int *p);
int main ()
{
    int numar=10;
    modifica(&numar);
    printf("%d ",numar);
    return 0;
}
void modifica(int *p)
{
    *p=123;
}