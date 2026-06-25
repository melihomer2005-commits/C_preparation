/*Cerință: Scrie un program care conține o funcție numită dubleaza. Această funcție trebuie să primească 
un vector de întregi prin intermediul unui pointer (int *v) și lungimea lui n. Funcția trebuie să parcurgă 
vectorul și să înmulțească fiecare element cu 2 (să le dubleze). */
#include <stdio.h>
void dub(int *v,int n);
int main ()
{
    int v[5]={1,2,3,4,5};
    int n=5;
    dub(v,5);
    for(int i=0;i<n;i++)
    {
        printf("%d ",v[i]);
    }
    return 0;
}
void dub(int *v,int n)
{
    for(int i=0;i<n;i++)
    {
        v[i]=v[i]*2;
    }

}
