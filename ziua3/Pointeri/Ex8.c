#include <stdio.h>
void functie(int *v,int n);
int main ()
{
    int v[3]={10,20,30};
    functie(v,3);
    
}
void functie(int *v,int n)
{
    int suma=0;
    int *p=v;
    for(int i=0;i<n;i++){
        suma=suma+*p;
        p++;
    }
    printf("%d ",suma);
}