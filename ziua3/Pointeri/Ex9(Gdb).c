#include<stdio.h>
int main ()
{
    int x=5;
    int *p=&x;
    *p=99;
    return 0;
}
/*
Type "apropos word" to search for commands related to "word"...
Reading symbols from ./Ex9...
(gdb) break main
Breakpoint 1 at 0x14000176d: file Ex9(Gdb).c, line 4.
(gdb) run
Starting program: C:\Users\melih\Desktop\C prep\ziua3\Pointeri\Ex9.exe 
[New Thread 13240.0x2ee4]

Thread 1 hit Breakpoint 1, main () at Ex9(Gdb).c:4
4           int x=5;
(gdb) next
5           int *p=&x;
(gdb) print x
$1 = 5
(gdb) print &x
$2 = (int *) 0x5ffe34
(gdb) next
6           *p=99;
(gdb) print p
$3 = (int *) 0x5ffe34
(gdb) print *p
$4 = 5
(gdb) x/4xb &x
0x5ffe34:       0x05    0x00    0x00    0x00                                                                                                                      
(gdb) next                                                                                                                                                        
7           return 0;                                                                                                                                             
(gdb) print x                                                                                                                                                     
$5 = 99                                                                                                                                                           
(gdb) x/4xb &x                                                                                                                                                    
0x5ffe34:       0x63    0x00    0x00    0x00                                                                                                                      
(gdb) q                                                                                                                                                           
A debugging session is active.                                                                                                                                    
                                                                                                                                                                  
        Inferior 1 [process 13240] will be killed.                                                                                                                
                                                                                                                                                                  
Quit anyway? (y or n) y                                  
*/
