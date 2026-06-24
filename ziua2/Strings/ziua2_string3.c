#include<stdio.h>
#include<string.h>
int main ()
{
    char nume[20];
    char prenume[10];
    char nume_prenume[30];
    fgets(nume,sizeof(nume),stdin);
    fgets(prenume,sizeof(prenume),stdin);
    nume[strlen(nume)-1]='\0';
    prenume[strlen(prenume)-1]='\0';
    strcpy(nume_prenume,prenume);
    strcat(nume_prenume," ");
    strcat(nume_prenume,nume);
    printf("%s",nume_prenume);
}