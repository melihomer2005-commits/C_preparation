#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int n=5;
    int *v=(int*)malloc(n*sizeof(int));
    if(v==NULL)
    {
        printf("Nu exista memorie\n");
        return 1;
    }
    for(int i=0;i<n;i++)
    {
        v[i]=i*10;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",v[i]);
    }
    free(v);
    v=NULL;

    return 0;
}
/*
Thread 1 hit Breakpoint 1, main () at Ex4.c:5
5           int n=5;
(gdb) print n
$1 = 0
(gdb) print &n
$2 = (int *) 0x5ffe34
(gdb) print *n
Cannot access memory at address 0x0
(gdb) n
6           int *v=(int*)malloc(n*sizeof(int));
(gdb) print n 
$3 = 5
(gdb) print &n
$4 = (int *) 0x5ffe34
(gdb) print *n
Cannot access memory at address 0x5
(gdb) n
7           if(v==NULL)
(gdb) print v
$5 = (int *) 0x778520
(gdb) print &v
$6 = (int **) 0x5ffe28
(gdb) print *v
$7 = -1163005939
(gdb) print v[0]
$8 = -1163005939
(gdb) print &[v]
A syntax error in expression, near `[v]'.
(gdb) print &v[0]
$9 = (int *) 0x778520
(gdb) print &v[1]
$10 = (int *) 0x778524
(gdb) print v[1]
$11 = -1163005939
(gdb) n
12          for(int i=0;i<n;i++)
(gdb) n
14              v[i]=i*10;
(gdb) n
12          for(int i=0;i<n;i++)
(gdb) print v[1]
$12 = -1163005939
(gdb) print v[2]
$13 = -1163005939
(gdb) print v[3]
$14 = -1163005939
(gdb) print &v[2]
$15 = (int *) 0x778528
(gdb) n
[New Thread 10392.0x4128]
14              v[i]=i*10;
(gdb) n
12          for(int i=0;i<n;i++)
(gdb) n
14              v[i]=i*10;
(gdb) n
12          for(int i=0;i<n;i++)
(gdb) n
14              v[i]=i*10;
(gdb) n
12          for(int i=0;i<n;i++)
(gdb) b 16
Breakpoint 2 at 0x7ff6f89817e1: file Ex4.c, line 16.
(gdb) c
Continuing.

Thread 1 hit Breakpoint 2, main () at Ex4.c:16
16          for(int i=0;i<n;i++)
(gdb) n
18              printf("%d ",v[i]);
(gdb) print v[0]
$16 = 0
(gdb) print v[1]
$17 = 10
(gdb) print &v[0] 
$18 = (int *) 0x778520
(gdb) n
0 16        for(int i=0;i<n;i++)
(gdb) n
18              printf("%d ",v[i]);
(gdb) n
10 16       for(int i=0;i<n;i++)
(gdb) n
18              printf("%d ",v[i]);
(gdb) b 18 
Breakpoint 3 at 0x7ff6f89817ea: file Ex4.c, line 18.
(gdb) c       
Continuing.
20 
Thread 1 hit Breakpoint 3, main () at Ex4.c:18
18              printf("%d ",v[i]);
(gdb) n
30 16       for(int i=0;i<n;i++)
(gdb) n

Thread 1 hit Breakpoint 3, main () at Ex4.c:18
18              printf("%d ",v[i]);
(gdb) n
40 16       for(int i=0;i<n;i++)
(gdb) n
20          free(v);
(gdb) n
21          v=NULL;
(gdb) n
23          return 0;
(gdb) print &v 
$19 = (int **) 0x5ffe28
(gdb) print *v
Cannot access memory at address 0x0
(gdb) print v
$20 = (int *) 0x0
(gdb) 
*/