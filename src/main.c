#include <stdio.h>
#include <stdlib.h>

int main() {
    int num = 5;
    int *arr = (int*)malloc(num * sizeof(int));
    arr[0] = 0; arr[1] = 1; arr[2] = 2; arr[3] = 3; arr[4] = 4;
    printf("%d\n", num);
    for(int i = 0; i < num; i++) 
        printf("%d ", *(arr + i));
    printf("\n");
    int temp; int leftIndex = 0; int rightIndex = num - 1;

    // ใส่ loop while เพื่อกำหนดเงื่อนไข
    while (leftIndex < rightIndex) {
        temp = arr[leftIndex];
        arr[leftIndex] = arr[rightIndex];
        arr[rightIndex] = temp;
        printf("Left : Right : %d %d\n", leftIndex, rightIndex);
        leftIndex++;
        rightIndex--;
        for(int i = 0; i < num; i++) 
            printf("%d ", *(arr + i));
        printf("\n");
        printf("===== End Loop =====\n");
    }

    /* for(int i = 0; i < num; i++) 
        printf("%d ", *(arr + i)); */

    free(arr);
    return 0;
}