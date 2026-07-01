#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int med=0;
    int s=0;
    int n=3;
    int *v=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
    printf("introdu notele tale:\n");
    scanf("%d",&v[i]);
    }
    for(int j=0;j<n;j++)
    {
        
        s+=v[j];
        med=s/n;
        
    }
    printf("media este %d",med);
    
    return 0;
}