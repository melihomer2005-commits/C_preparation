#include <stdio.h> 
int sum,k;
int main (){
    int v[5]={10,21,31,42,50};
    int lungime=sizeof(v)/sizeof(v[0]);
    for(int i=0;i<lungime;i++){
        sum+=v[i];
        k++;
    }
float media=(float)sum/k;
printf("Suma este %d , iar media este %2.f",sum ,media);
return 0 ;
}