#include <stdio.h>
int main ()
{
    int n=9;
    int este_prim=1;
    if(n<2)
    {
        este_prim=0;
    }
    else
    {
        for(int d=2;d*d<=n;d++)
        {
            if(n%d==0)
            {
                este_prim=0;
                break;
            }
        }
    }
    if(este_prim==1)
    {
        printf("este prim");
    }
    else if(este_prim==0)
    {
        printf("nu este prim");
    }
}