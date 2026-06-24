#include <stdio.h>
int main (){
for(int i=1;i<=50;i++){
    if(i%17==0){
    break;
    }
    if(i%5==0){
        continue;
    }
}
return 0;
}