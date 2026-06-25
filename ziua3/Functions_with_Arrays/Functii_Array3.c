#include <stdio.h> 
int max(int v[],int n);
int main ()
{
    int v[5]={1,52,25,24,42};
    max(v,5);
    printf("%d ",max(v,5));
}
int max(int v[],int n)
{
    int maxim=v[0];       
    for(int i=0;i<n;i++)
    {
        if(v[i]>maxim)
        {
            maxim=v[i];
        }
    }
    return maxim;
}