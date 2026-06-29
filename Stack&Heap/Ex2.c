#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int *v=malloc(5*sizeof(int));
    if(v==NULL)
    {
        printf("Nu mai este memorie");
        return 1;
    }
    v[0]=10;
    v[1]=20;
    v[2]=30;
    v[3]=40;
    v[4]=50;
    
    for(int i=0;i<5;i++)
    {
        printf("%d ",v[i]);
    }
    free(v);
    v=NULL;
}