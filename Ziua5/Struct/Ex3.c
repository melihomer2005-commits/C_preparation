#include<stdio.h>
#include<stdlib.h>
typedef struct {
    int id;
    float valoare;
    char tip;
}Senzor;
Senzor* initializeaza_senzor(int id, float valoare,char tip);
int main ()
{
    Senzor* p = initializeaza_senzor(10, 120.0, 'T');
    if (p == NULL) {
        printf("Eroare la alocarea memoriei pe heap!\n");
        return 1;
    }
    printf("Senzor ID: %d\n", p->id);
    printf("Valoare: %.1f\n", p->valoare);
    printf("Tip: %c\n", p->tip);
    
   
    printf("Dimensiune structura: %zu bytes\n", sizeof(Senzor));

    
    free(p);
    p = NULL; 

    return 0;
}
Senzor* initializeaza_senzor(int id, float valoare,char tip)
{
    Senzor* p=(Senzor*)malloc(sizeof(Senzor));
    if (p == NULL) {
        return NULL;
    }

    // POPULĂM CÂMPURILE: Folosim -> pentru că p este un pointer
    p->id = id;
    p->valoare = valoare;
    p->tip = tip;

    // Returnăm adresa din heap a senzorului nou creat
    return p;
}