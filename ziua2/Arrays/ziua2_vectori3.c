#include <stdio.h>

int main(){
    int v[5]={10,20,30,40,50};
    int lungime=sizeof(v)/sizeof(v[0]);
    for(int i=0;i<lungime;i++)
    {
        printf("%d\n",v[i]);
    }
    int stanga=0;
    int dreapta=lungime-1;
    while(stanga<dreapta)
    {
        int tmp=v[stanga];
        v[stanga]=v[dreapta];
        v[dreapta]=tmp;
        stanga++;
        dreapta--;

    }
    for(int i=0;i<lungime;i++)
    {
        printf("%d",v[i]);
    }
}