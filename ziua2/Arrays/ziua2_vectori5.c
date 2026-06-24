#include<stdio.h>

int main()
{
    int v[8] = {0, 12, 0, 3, -5, 0, 44, 0};
    int lungime=sizeof(v)/sizeof(v[0]);
    int pozitie=0;
    for(int i=0;i<lungime;i++)
    {
        if(v[i]!=0)
        {
            v[pozitie]=v[i];
            pozitie++;
        }
    }
    for(int j=pozitie;j<lungime;j++)
    {
        
        
            v[j]=0;
            pozitie++;
        
    }
    for(int i=0;i<lungime;i++){
    printf("%d",v[i]);}
    return 0;
}