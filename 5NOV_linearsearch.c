#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, search;
    printf("Enter the length of the array=");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter the number to search=");
    scanf("%d", &search);

    int i, found = 0;
    for (i = 0; i < n; i++) {
        if (a[i] == search) {
            printf("The number %d is found at position %d\n", search, i + 1);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("The number %d is not found in the array.\n", search);
    }

    return 0;
}
// Enter the length of the array=4
// Enter the elements of the array:
// 3 1 2 4
// Enter the number to search=1
// The number 1 is found at position 2

