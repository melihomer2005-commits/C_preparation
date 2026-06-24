#include <stdio.h>
int main(){
    int v[5]={12,25,-20,40,-66};
    int lungime=sizeof(v)/sizeof(v[0]);
    int max=v[0];
    int min=v[0];
    for(int i=0;i<lungime;i++){
        if(v[i]>max)
        {
            max=v[i];
        }
        else if(v[i]<min)
        {
            min=v[i];
        }
    }
    printf("Maximul este : %d , iar minimul este : %d ",max,min);
    return 0;
}