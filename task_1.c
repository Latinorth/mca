#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;
    printf("%d %p %d \n", x, p, *p);
    *p = 20;
    printf("%d %p %d \n", x, p, *p);
}