#include <stdio.h>
#include <string.h>

int main ()
{
    char s[20];
    char m[20];
    fgets(s,sizeof(s),stdin);
    fgets(m,sizeof(s),stdin);
    printf("%d",strcmp(s,m));
}