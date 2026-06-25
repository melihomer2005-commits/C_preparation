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