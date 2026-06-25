#include <stdio.h>
void banana(int *v,int n,int *max,int *min);
int main ()
{
    int v[5]={10,20,-30,70,120};
    int n,maxi,mini;
    banana(v,5,&maxi,&mini);
    printf("%d %d",maxi,mini);
    return 0;
}
void banana(int *v,int n,int *max,int *min)
{
    *max=v[0];
    *min=v[0];
    for(int i=0;i<n;i++)
    {
        if(v[i]>*max)
        {
            *max=v[i];
        }
        else if(v[i]<*min)
        {
            *min=v[i];
        }
    }

}