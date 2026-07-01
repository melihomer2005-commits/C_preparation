#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int n=0;
    printf("Numarul de scanari este:\n");
    scanf("%d",&n);
    int *v=(int*)calloc(100,sizeof(int));
    if(v==NULL)
    {
        printf("Nu exista spatiu");
        return 1;
    }
    if(n>0)
    {
        for(int i=0;i<n;i++)
        {   
            int id=0;
            printf("Scanarea %d:\n ",i+1);
            scanf("%d",&id);
            if(id>0 && id<100)
            {
                v[id]++;
            
            }
        }
    

    }
    for(int j=0;j<n;j++)
    {
        if(v[j]>0)
        {
            printf("Angajatul cu id ul %d a intrat de %d",j,v[j]);
        }
    }
    free(v);
    v=NULL;
}