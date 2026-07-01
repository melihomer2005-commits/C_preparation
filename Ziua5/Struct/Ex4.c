#include<stdio.h>
#include<stdlib.h>
typedef struct{
    int id;
    int nivel_acces;
    char initiala;
}Utilizator;
Utilizator* aloca_utilizator(int id,int nivel_acces,char initiala);
int main()
{
Utilizator* p=aloca_utilizator(10,2,'Z');
if(p==NULL)
    {
        printf("Nu s a alocat memorie");
    }
printf("%d \n",p->id);
printf("%d \n",p->nivel_acces);
printf("%c \n",p->initiala);
printf("%zu \n",sizeof(Utilizator));

free(p);
p==NULL;
}
Utilizator* aloca_utilizator(int id,int nivel_acces,char initiala)
{
    Utilizator* p=(Utilizator*)malloc(sizeof(Utilizator));
    if(p==NULL)
    {
        printf("Nu s a alocat memorie");
    }
    p->id=id;
    p->nivel_acces=nivel_acces;
    p->initiala=initiala;
    return p;
}