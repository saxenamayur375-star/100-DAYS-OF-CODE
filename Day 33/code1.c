//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/


#include <stdio.h>

int main() {
    int n, key;
    int low, high, mid;
    int found = -1;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements in sorted order: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element you want to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            found = mid;
            break;
        }
        else if (key > arr[mid]) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (found != -1) {
        printf("Found at index %d", found);
    }
    else {
        printf("-1");
    }

    return 0;
}