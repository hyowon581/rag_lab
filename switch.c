#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("chcp 65001 > nul");
    int month;
    scanf("%d", &month);

    switch(month)
    {
        case 2:
            printf("28");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30");
            break;
        default:
            printf("31");
            
    }
    return 0;
}
