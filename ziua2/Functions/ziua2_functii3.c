#include <stdio.h>

int functie(int a);

int main (){
    int b=-99;
    int rezultate=functie(b);
    printf("rezultatul este %d\n",rezultate);
return 0;  
}
int functie(int a) {
    if(a>0){
        if(a%3==0){
            return 1;
        }
        else {
            return 0;
        }
    } else {
        return 0;
    }
}