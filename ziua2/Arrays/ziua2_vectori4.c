#include <stdio.h>
int main () {

    int v[6]={10,25,30,25,40,25};
    
    int lungime=sizeof(v)/sizeof(v[0]);
    int target=25;
    int k=0;
    for(int i=0;i<lungime;i++)
    {
        if(target==v[i])
        {
            printf("%d\n",i);
            k++;
        }    
    }
    if(k==0)
    {
        printf("Nu exista asemanari");
    }
    

    return 0;
}