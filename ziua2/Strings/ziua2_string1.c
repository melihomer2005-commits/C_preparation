#include <stdio.h>
#include <string.h>
int main ()
{
    char s[10];
    fgets(s,sizeof(s),stdin);
    s[strlen(s)-1]='\0';
    printf("%d",strlen(s));
}