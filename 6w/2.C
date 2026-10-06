//삽입정렬 : 현재 값들 앞의 정렬된 부분에 알맞은 위치에 삽입
#include <stdio.h>

int main(){
    int number[] = {3,7,12,24,45};
    int size = sizeof(number) / sizeof(number[0]);
    int key,j;

    for (int i=1; i<size; i++) {
        key=number[i];
        j=i-1;

        while (j >= 0 && number[j] > key) {
            number[j + 1] = number[j];
            j--;
        }

        number[j + 1]=key;
    }

    for (int i = 0; j < size; j++) {
        printf("%d", number[i]);
    }

    return 0;
}