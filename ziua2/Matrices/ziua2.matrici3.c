#include <stdio.h>
int main ()
{
     int s[3][3]={1,2,3,4,5,6,7,8,9};
     int max=s[0][0];
     for(int i=0;i<3;i++)
     {
        for(int j=0;j<3;j++)
        {
            if(s[i][j]>max)
            {
                max=s[i][j];
            }
        }
     }
     printf("%d ",max);
}