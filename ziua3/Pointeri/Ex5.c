#include <stdio.h>
void inv(int *p);
int main ()
{
    int x=45;
    inv(&x);
    printf("%d ",x);
    return 0;
}
void inv(int *p)
{
    *p*=(-1);
}