#include <stdio.h>
int main ()
{
    int n=9;
    int este_prim=1;
    if(n<2)
    {
        este_prim=0;
    }
    else
    {
        for(int d=2;d*d<=n;d++)
        {
            if(n%d==0)
            {
                este_prim=0;
                break;
            }
        }
    }
    if(este_prim==1)
    {
        printf("este prim");
    }
    else if(este_prim==0)
    {
        printf("nu este prim");
    }
}
/*
Type "apropos word" to search for commands related to "word"...
Reading symbols from ./nr_prim_gdbb...
(gdb) b main
Breakpoint 1 at 0x14000176d: file nr_prim_gdbb.c, line 4.
(gdb) run
Starting program: C:\Users\melih\Desktop\C prep\ziua3\GDB\nr_prim_gdbb.exe 
[New Thread 3452.0x7fec]

Thread 1 hit Breakpoint 1, main () at nr_prim_gdbb.c:4
4           int n=7;
(gdb) print n
$1 = 0
(gdb) next
5           int este_prim=1;
(gdb) print n
$2 = 7
(gdb) print este_prim
$3 = 32758
(gdb) next
6           if(n<2)
(gdb) print este_prim
$4 = 1
(gdb) next
11          for(int i=2;i*i<=n;i++)
(gdb) next
13              if(n%i==0)
(gdb) print i
$5 = 2
(gdb) next
11          for(int i=2;i*i<=n;i++)
(gdb) print i
$6 = 2
(gdb) next
21      if(este_prim==1)
(gdb) print i
No symbol "i" in current context.
(gdb) print este_prim
$7 = 1
(gdb) next
[New Thread 3452.0x56d4]
23          printf("numarul este prim\n");
(gdb) next
numarul este prim
25      if(este_prim==0)
(gdb) printf este_prim
Bad format string, missing '"'.
(gdb) print este_prim
$8 = 1
(gdb) next
29      }
(gdb) next
0x00007ff6bf0013ba in __tmainCRTStartup ()
(gdb) next
Single stepping until exit from function __tmainCRTStartup,
which has no line number information.
[Thread 3452.0x7fec exited with code 0]
[Thread 3452.0x56d4 exited with code 0]
[Inferior 1 (process 3452) exited normally]                                                                                                                       
(gdb) r                                                                                                                                                           
Starting program: C:\Users\melih\Desktop\C prep\ziua3\GDB\nr_prim_gdbb.exe                                                                                        
[New Thread 41592.0x96d0]                                                                                                                                         
                                                                                                                                                                  
Thread 1 hit Breakpoint 1, main () at nr_prim_gdbb.c:4                                                                                                            
4           int n=7;                                                                                                                                              
(gdb) q                                                                                                                                                           
A debugging session is active.                                                                                                                                    
                                                                                                                                                                  
        Inferior 1 [process 41592] will be killed.                                                                                                                
                                                                                                                                                                  
Quit anyway? (y or n) y                                      
*/
