#include <stdio.h>
#include <stdlib.h>

int main ()
{   
    int lungime = 0;
    int capacitate = 2;
    int *v = (int*)malloc(capacitate * sizeof(int));
    
    if (v == NULL) {
        printf("Eroare la alocare inițială!");
        return 1;
    }

    while(1)
    {
        int n;
        printf("Introduceti un pret (-1 pentru oprire): ");
        scanf("%d", &n); // Am pus &n, nu uita de ampersand la scanf!
        
        if(n == -1)
        {
            break;
        }

        // Piesa 1: Verificăm DACĂ s-a umplut vectorul înainte de a adăuga numărul
        if (lungime == capacitate) 
        {
            capacitate = capacitate * 2; // Dublăm capacitatea (devine 4, apoi 8 etc.)
            printf("[REALLOC] Vectorul e plin! Redimensionam la %d elemente.\n", capacitate);

            // Piesa 2: Apelăm realloc corect în interiorul buclei
            int *tmp = (int*)realloc(v, capacitate * sizeof(int));
            if(tmp != NULL)
            {
                v = tmp; // Actualizare sigură
            }
            else 
            {
                printf("Nu mai exista memorie RAM!\n");
                free(v);
                return 1;
            }
        }

        v[lungime] = n;
        lungime++;
    }

    // Piesa 3: Afișarea și curățenia se fac AICI, după ce am ieșit din while!
    printf("\nPreturile introduse sunt: ");
    for (int i = 0; i < lungime; i++) {
        printf("%d ", v[i]);
    }
    printf("\nTotal elemente salvate: %d\n", lungime);

    free(v);
    v = NULL;

    return 0; // ABIA ACUM închidem programul, la final de tot!
}