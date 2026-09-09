#include <stdio.h>

int main() {

    int arr[] = {1, 2, 3, 4, -1};
    int n;

    printf("Enter the number to be inserted: ");
    scanf("%d", &n);

    for(int i = 0; i < 5; i++) {

        if(arr[i] == -1) {
            arr[i] = n;

            printf("Element inserted at index %d\n", i);
            break;
        }
    }

    printf("Array: ");

    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}