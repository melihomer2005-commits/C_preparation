#include<stdio.h>
#include<stdlib.h>
int alocare_memorie;
int free_alocare; 
void* malloc_tracker(size_t size);
void free_tracker(void* p);
int main ()
{  
    int *a=(int*)malloc_tracker(sizeof(int));
    int *b=(int*)malloc_tracker(5 * sizeof(int));

    *a=42;
    for(int i=0;i<5;i++)
    {
        b[i]=i;
    }
    free_tracker(a);
    if(alocare_memorie!=free_alocare)
    {
        printf("LEAK DE MEMORIE DETECTAT\n ");
    }
    return 0;
}
void* malloc_tracker(size_t size)
{
    alocare_memorie++;
    printf("Malloc a fost alocat de %d si au fost alocati %zu bytes\n ",alocare_memorie,size);
    return malloc(size);
}
void free_tracker(void *p)
{
    free_alocare++;
    printf("Total free-uri %d\n ",free_alocare);
    free(p);
}