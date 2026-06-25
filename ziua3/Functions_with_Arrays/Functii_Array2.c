#include<stdio.h>
int suma(int v[],int n);
int s;
int main()
{
    int v[5]={1,2,3,4,5};
    suma(v,5);
    printf("%d ",s);
    return 0;
}
int suma(int v[],int n)
{
    for(int i=0;i<n;i++)
    {
        s+=v[i];
    }
    return s;
}