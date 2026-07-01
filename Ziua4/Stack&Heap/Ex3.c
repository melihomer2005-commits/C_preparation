#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int x=10;
    printf("adresa lui x %p\n",&x);
    int *p=(int*)malloc(sizeof(int));
    if(p==NULL)
    {
        printf("Nu exista memorie RAM disponibila\n ");
        return 1;
    }
    *p=10;
    printf("Adresa lui p este %p\n ",&p);
    printf("valoarea lui p este %d",*p);
    free(p);
    p=NULL;
    return 0;
}