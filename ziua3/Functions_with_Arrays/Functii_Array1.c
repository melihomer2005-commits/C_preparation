#include <stdio.h>
void afiseaza(int v[],int n);
int main ()
{
    int v[5]={1,2,3,4,5};
    afiseaza(v,5);
    return 0;
}
void afiseaza(int v[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",v[i]);
    }
}
