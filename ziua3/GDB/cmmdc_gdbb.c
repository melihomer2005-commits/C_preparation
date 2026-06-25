#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else 
        {
            b=b-a;
        }
    }
    printf("%d ",a);
    return 0;
}