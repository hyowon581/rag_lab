#include <stdio.h>

void insertion_sort(int arr[], int n) {
    int i, j, key;
    for (i = 1; i < n; i++) {
        key = arr[i]; // 현재 삽입할 값
        j = i - 1;
        
        // 정렬된 배열을 뒤에서부터 탐색하며 key보다 큰 원소를 오른쪽으로 이동
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        
        // 알맞은 위치에 key 삽입
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {5, 16, 1, 4, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertion_sort(arr, n);

    printf("정렬 결과: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
