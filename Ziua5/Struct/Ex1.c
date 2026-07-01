#include <stdio.h>
typedef struct{
    char nume[50];
    int varsta;
    float medie;
}Student;
int functie_max(Student v[],int n);
int main ()
{
    Student studenti[3]= {
        {"Andrei",15,7.6},
        {"Melih",20,10},
        {"Andu",21,11}
    };
    functie_max(studenti, 3);
    printf("%d",functie_max(studenti,3));
    return 0;
}
int functie_max(Student v[],int n)
{
    int max=0;
    
    for(int i=0;i<n;i++)
    {
        if(v[i].medie>v[max].medie)
        {
        max=i;
        
        }
    }
    return max;
}