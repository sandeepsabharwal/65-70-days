# Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

#include <stdio.h>

int main() {
    int arr[100], n, total, sum = 0;

    printf("Enter the value of n (array size should be n - 1): ");
    scanf("%d", &n);

    printf("Enter %d elements (from 0 to %d, missing one):\n", n - 1, n);
    for(int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    total = n * (n + 1) / 2; 
    int missing = total - sum;

    printf("Missing number is: %d\n", missing);
    return 0;
}
