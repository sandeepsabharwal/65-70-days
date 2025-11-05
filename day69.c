# Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

#include <stdio.h>

int main() {
    int arr[100], freq[100] = {0};
    int n;

    printf("Enter number of elements (n): ");
    scanf("%d", &n);

    printf("Enter %d elements (only one repeated):\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if(freq[arr[i]] == 1) {
            printf("Repeated element: %d\n", arr[i]);
            return 0;
        }
        freq[arr[i]] = 1;
    }

    printf("No repeated element found\n");
    return 0;
}
