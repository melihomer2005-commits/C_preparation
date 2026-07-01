#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int *p=malloc(sizeof(int));
    if(p==NULL)
    {
        printf("Nu mai e spatiu liber in RAM");
        return 1;
    }
    *p=77;
    printf("Valoarea in Heap este %d \n",*p);
    printf("Adresa la care se afla Heap %p ",(void*)p);

    free(p);
    p=NULL;
    return 0;
}
/*
Type "apropos word" to search for commands related to "word"...
Reading symbols from ./Ex1...
(gdb) b main
Breakpoint 1 at 0x14000176d: file Ex1.c, line 6.
(gdb) r
Starting program: C:\Users\melih\Desktop\C prep\Ziua4\Stack&Heap\Ex1.exe 
[New Thread 19312.0x53c4]

Thread 1 hit Breakpoint 1, main () at Ex1.c:6
6           int *p=malloc(sizeof(int));
(gdb) n
7           if(p==NULL)
(gdb) printf *p
Bad format string, missing '"'.
(gdb) print *p
$1 = -1163005939
(gdb) print p
$2 = (int *) 0x775590
(gdb) print &p
$3 = (int **) 0x5ffe38
(gdb) n
12          *p=77;
(gdb) print *p
$4 = -1163005939
(gdb) print p 
$5 = (int *) 0x775590
(gdb) next
13          printf("Valoarea in Heap este %d \n",*p);
(gdb) print *p
$6 = 77
(gdb) print p 
$7 = (int *) 0x775590
(gdb) print &p
$8 = (int **) 0x5ffe38
(gdb) next
Valoarea in Heap este 77 
14          printf("Adresa la care se afla Heap %p ",(void*)p);
(gdb) next
Adresa la care se afla Heap 0000000000775590 16     free(p);
(gdb) next
17          p=NULL;
(gdb) print *p
$9 = 7832864
(gdb) print p
$10 = (int *) 0x775590
(gdb) print &p
$11 = (int **) 0x5ffe38
(gdb) next 
[New Thread 19312.0x39b8]
18          return 0;
(gdb) print *p
Cannot access memory at address 0x0
(gdb) 
*/