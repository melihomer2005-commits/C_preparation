#include <stdio.h>
void inv(int *a,int *b);
int main ()
{
    int x=10 ,y=7;
    inv(&x,&y);
    printf("%d %d ",x,y);
    return 0;
}
void inv(int *a, int *b)
{
    int aux=0;
    aux=*a;
    *a=*b;
    *b=aux;
}