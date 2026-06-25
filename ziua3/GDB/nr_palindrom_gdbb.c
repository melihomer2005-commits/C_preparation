#include <stdio.h>
int main ()
{
    int n=202;
    int copie=n;
    int oglindit=0;
    int ultima_cifra=0;
    while(n>0)
    {
        ultima_cifra=n%10;
        oglindit=oglindit*10+ultima_cifra;
        n=n/10;
    }
    if(copie==oglindit)
    {
        printf("Numarul este palindrom");
    }
    else 
    {
        printf("Numarul nu este palindrom");
    }
}