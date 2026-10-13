#include <stdio.h>
#include <stdlib.h>

int main() {
    int i=10;
    int *p;

    p=&i;

    printf("p= %p \n", p);
    printf("(*p)++ = %d \n", (*p)++);
    printf("*++ p= %d \n", *p++);
    printf("p++ = %p \n", p++);

    return 0;
}