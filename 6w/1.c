#include <stdio.h>

void selectionSort(int arr[], int n) {
    int i, j, minIdx, temp;
    
    // 마지막 요소 전까지 반복
    for (i = 0; i < n - 1; i++) {
        minIdx = i; // 최솟값 인덱스 초기화
        
        // 미정렬 부분에서 최솟값 찾기
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        
        // 찾은 최솟값을 현재 위치(i)와 교환
        if (minIdx != i) {
            temp = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = temp;
        }
    }
}

int main() {
    int arr[] = {7, 4, 10, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    selectionSort(arr, n);
    
    printf("정렬 결과: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
