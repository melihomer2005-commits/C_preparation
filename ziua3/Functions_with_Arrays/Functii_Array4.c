#include <stdio.h>
void inv(int v[],int n);
int main ()
{
    int v[5]={1,2,3,4,5};
    inv(v,5);
    return 0;
}
void inv(int v[],int n)
{
    int stanga=0;
    int dreapta=n-1;
    while(stanga<dreapta)
    {
        int tmp=v[stanga];
        v[stanga]=v[dreapta];
        v[dreapta]=tmp;
        stanga++;
        dreapta--;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",v[i]);
    }
    
}