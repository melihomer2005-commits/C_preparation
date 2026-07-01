#include<stdio.h>
typedef struct{
    char nume[50];
    int varsta;
    float medie;
}Studenti;
void mareste_varsta(Studenti *s);
int main()
{
    Studenti s1={"Andrei",21,6.9};
    Studenti *p=&s1;
    printf("%d \n",s1.varsta);
    mareste_varsta(p);
    printf("%d",p->varsta);
    return 0;
}
void mareste_varsta(Studenti *s)
{
    s->varsta++;
}