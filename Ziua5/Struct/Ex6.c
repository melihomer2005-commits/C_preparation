#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int pasageri;
    void* next;
}Vagon;
int main ()
{
    Vagon* v1=(Vagon*)malloc(sizeof(Vagon));
    Vagon* v2=(Vagon*)malloc(sizeof(Vagon));
    v1->pasageri=50;
    v2->pasageri=120;
    v1->next=v2;
    v2->next=NULL;
    printf("%d ",((Vagon*)v1->next)->pasageri);
    free(v1);
    free(v2);
}