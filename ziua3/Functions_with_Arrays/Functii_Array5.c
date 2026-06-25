#include <stdio.h>
void afisare(int v[][3],int n ,int m);
int suma(int v[][3],int n,int m);
int main ()
{
    int v[3][3]={1,2,3,4,5,6,7,8,9};
    afisare(v,3,3);
    suma(v,3,3);
    printf("%d ",suma(v,3,3));
}
void afisare(int v[][3],int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",v[i][j]);
        }
    printf("\n");
    }
}
int suma(int v[][3],int n,int m)
{
    int s=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            s+=v[i][j];
        }
    }
return s;
}