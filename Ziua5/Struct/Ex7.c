#include<stdio.h>
#include<stdlib.h>
typedef struct{
    int Ip;
    void* next;
}Server;

int main()
{
    Server* s1=(Server*)malloc(sizeof(Server));
    Server* s2=(Server*)malloc(sizeof(Server));
    Server* s3=(Server*)malloc(sizeof(Server));
    s1->Ip=20;
    s2->Ip=30;
    s3->Ip=40;
    s1->next=s2;
    s2->next=s3;
    s3->next=NULL;
    printf("%d",((Server*)((Server*)s1->next)->next)->Ip);
    return 0;
}