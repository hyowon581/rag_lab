#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int number;
    printf("입력:");
    scanf("%d",&number);

    printf("%s\n", (number%2==0)? "Even" : "odd");
    return 0;
} 