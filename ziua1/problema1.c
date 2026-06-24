#include <stdio.h>

int main (){
    for(int i=0;i<=20;i++) {
        if(i%3==0){
            continue;
        }
    printf("%d ",i);
    }
return 0;
}