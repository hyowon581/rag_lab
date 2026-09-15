#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j;
    for (int i=5; i>1; i--1)
    {
        for (int j=1;j<=i;j++)
        {
            printf("*")
        }
        printf("\n")
    }
    return 0;
}