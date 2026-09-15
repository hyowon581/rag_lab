#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num1, num2;
    int temp;
    scanf("$d",&num1);
    scanf("$d",&num2);

    temp = num2;
    while(temp>0)
    {
        printf("%d\n", num1*(temp*10));
        temp/=10;
    }
    printf("%d",num1*num2);
    return 0;
    
}
