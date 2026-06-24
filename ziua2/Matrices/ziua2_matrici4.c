#include <stdio.h>
int main ()
{
    int s[3][3]={1,2,3,4,5,6,7,8,9};
    int a=0,b=0,c=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i==0)
            {
                a+=s[i][j];
            }
            else if(i==1)
            {
                b+=s[i][j];
            }
            else 
            {
                c+=s[i][j];
            }
        }
    }
    printf("%d %d %d ",a,b,c);
}