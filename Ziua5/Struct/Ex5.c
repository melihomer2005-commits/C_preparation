#include<stdio.h>
#include<stdlib.h>
typedef struct{
    int id;
}Cutie;
int main()
{
    Cutie* c1=(Cutie*)malloc(sizeof(Cutie));
    Cutie* c2=(Cutie*)malloc(sizeof(Cutie));
    c1->id=100;
    c2->id=200;
    printf("%d %d ",c1->id,c2->id);
    free(c1);
    free(c2);
    return 0;
}