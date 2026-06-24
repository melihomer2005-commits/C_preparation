#include <stdio.h>

void Nr_par(int a);

int main (){
    int b=21;
    Nr_par(b);
return 0;
}
void Nr_par(int a) {
    if(a%2==0){
        printf("Numarul este par\n");
    }
    else {
        printf("Numarul este impar\n");
    }

     
}