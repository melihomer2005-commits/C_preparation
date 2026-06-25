#include <stdio.h>

void f(int *p, int q) {
    p = &q;
    *p = 20;
}

int main() {
    int x = 5, y = 10;
    f(&x, y);
    printf("%d %d", x, y);
    return 0;
}