#include <stdio.h>

int main() {
    int x = 50;
    int y = 90;
    int *p; // Declarăm un pointer p (un sertar gol care va ține adrese)

    p = &x; // Pasul 1: p primește adresa lui x
    *p = 200; // Pasul 2: Modificăm valoarea prin dereferențiere

    p = &y; // Pasul 3: Mutăm pointerul să arate către y
    *p = 400; // Pasul 4: Modificăm valoarea lui y prin p

    return 0;
}
/*
GDB:
PS C:\Users\melih\Desktop\C prep\ziua3\GDB> .\pointeri_gdbb.exe 
PS C:\Users\melih\Desktop\C prep\ziua3\GDB> gcc -g pointer_gdbb.c -o pointeri_gdbb
cc1.exe: fatal error: pointer_gdbb.c: No such file or directory
compilation terminated.
PS C:\Users\melih\Desktop\C prep\ziua3\GDB> gcc -g pointeri_gdbb.c -o pointeri_gdbb
PS C:\Users\melih\Desktop\C prep\ziua3\GDB> gdb ./pointeri_gdbb
GNU gdb (GDB for MinGW-W64 x86_64, built by Brecht Sanders, r3) 17.2
Copyright (C) 2025 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.
Type "show copying" and "show warranty" for details.
This GDB was configured as "x86_64-w64-mingw32".
Type "show configuration" for configuration details.
For bug reporting instructions, please see:
<https://www.gnu.org/software/gdb/bugs/>.
Find the GDB manual and other documentation resources online at:
    <http://www.gnu.org/software/gdb/documentation/>.

--Type <RET> for more, q to quit, c to continue without paging--c
For help, type "help".
Type "apropos word" to search for commands related to "word"...
Reading symbols from ./pointeri_gdbb...
(gdb) b main
Breakpoint 1 at 0x14000176d: file pointeri_gdbb.c, line 4.
(gdb) r
Starting program: C:\Users\melih\Desktop\C prep\ziua3\GDB\pointeri_gdbb.exe 
[New Thread 14540.0xb25c]

Thread 1 hit Breakpoint 1, main () at pointeri_gdbb.c:4
4           int x = 50;
(gdb) next
5           int y = 90;
(gdb) next
8           p = &x; // Pasul 1: p prime╚Öte adresa lui x
(gdb) print x
$1 = 50
(gdb) print y
$2 = 90
(gdb) print &x
$3 = (int *) 0x5ffe34
(gdb) print &y
$4 = (int *) 0x5ffe30
(gdb) print *x
Cannot access memory at address 0x32
(gdb) next
9           *p = 200; // Pasul 2: Modific─âm valoarea prin dereferen╚¢iere
(gdb) print p
$5 = (int *) 0x5ffe34
(gdb) print *p
$6 = 50
(gdb) print &y 
$7 = (int *) 0x5ffe30
(gdb) next
11          p = &y; // Pasul 3: Mut─âm pointerul s─â arate c─âtre y
(gdb) print p
$8 = (int *) 0x5ffe34
(gdb) print *p
$9 = 200
(gdb) next
[New Thread 14540.0x2d20]
12          *p = 400; // Pasul 4: Modific─âm valoarea lui y prin p
(gdb) print p
$10 = (int *) 0x5ffe30
(gdb) print &p
$11 = (int **) 0x5ffe38
(gdb) next
14          return 0;
(gdb) print &p
$12 = (int **) 0x5ffe38
(gdb) print p
$13 = (int *) 0x5ffe30                                                                                                                                            
(gdb) print *p                                                                                                                                                    
$14 = 400                                                                                                                                                         
(gdb) x/4xb &x                                                                                                                                                    
0x5ffe34:       0xc8    0x00    0x00    0x00                                                                                                                      
(gdb) x/4xb &y                                                                                                                                                    
0x5ffe30:       0x90    0x01    0x00    0x00                                                                                                                      
(gdb) q                                                                                                                                                           
A debugging session is active.                                                                                                                                    
                                                                                                                                                                  
        Inferior 1 [process 14540] will be killed.
*/
