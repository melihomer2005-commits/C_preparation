#include<stdio.h>
int main ()
{
    int x=5;
    int *p=&x;
    *p=99;
    printf("%p ",&x);
    return 0;
}