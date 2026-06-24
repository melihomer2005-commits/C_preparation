#include <stdio.h>

int nr_max(int a,int b);

int main () {
    int c=90 , d=35;
    int rezultat=nr_max( c, d);
    printf("%d",rezultat);
}
int nr_max(int a,int b){
    if(a>b){
        return a;
    }
    else if(a<b){
        return b;
    }
    else {
    return a;
    }
}
